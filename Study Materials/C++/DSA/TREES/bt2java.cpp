// Online Java Compiler
// Use this editor to write, compile and run your Java code online

  import java.io.*;
  import java.util.*;
  public class HelloWorld {
      public static void main(String[] args) throws IOException {
          BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
          PrintWriter wr = new PrintWriter(System.out);
          int T = Integer.parseInt(br.readLine().trim());
          for (int t_i = 0; t_i < T; t_i++) {
              int N = Integer.parseInt(br.readLine().trim());
              int M = Integer.parseInt(br.readLine().trim());
              int[][] roads = new int[M][2];
              for (int i_roads = 0; i_roads < M; i_roads++) {
                  String[] arr_roads = br.readLine().split(" ");
                  for (int j_roads = 0; j_roads < arr_roads.length; j_roads++) {
                      roads[i_roads][j_roads] = Integer.parseInt(arr_roads[j_roads]);
                  }
              }
              String[] arr_A = br.readLine().split(" ");
              int[] A = new int[N];
              for (int i_A = 0; i_A < arr_A.length; i_A++) {
                  A[i_A] = Integer.parseInt(arr_A[i_A]);
              }
              int out_ = maxFriendshipPower(N, M, roads, A);
              System.out.println(out_);
          }
          wr.close();
          br.close();
      }
      static int maxFriendshipPower(int N, int M, int[][] roads, int[] A) {
          int result = 0;
          for (int i = 0; i < M; i++) {
              for (int j = 0; j < 2; j++) {
                  System.out.println(roads[i][j]);
              }
          }
          int[] B = new int[A.length];
          int count = 1;
          for (int i = 0; i < A.length; i++) {
              B[i] = count++;
          }
          for (int i = 0; i < A.length; i++) {
              System.out.println(B[i]);
          }
          List < List < Integer >> result1 = new HelloWorld().permute(B);
          for (int i = 0; i < result1.size(); i++) {
              System.out.println(result1.get(i));
          }
          return result;
      }
      static List < List < Integer >> permute(int[] nums) {
          List < List < Integer >> result = new ArrayList < > ();
          Permutation(0, nums, result);
          return result;
      }
      static void Permutation(int i, int[] nums, List < List < Integer >> result) {
          if (i == nums.length - 1) {
              List < Integer > list = new ArrayList < > ();
              for (int n: nums) list.add(n);
              result.add(list);
          } else {
              for (int j = i, l = nums.length; j < l; j++) {
                  int temp = nums[j];
                  nums[j] = nums[i];
                  nums[i] = temp;
                  Permutation(i + 1, nums, result);
                  temp = nums[j];
                  nums[j] = nums[i];
                  nums[i] = temp;
              }
          }
      }
  }