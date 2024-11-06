// #include<stdio.h>
// #include<stdlib.h>


[1,2,3,4,5,6,7], k = 3
[5,6,7,1,2,3,4]


// #define N 500000
// void quicksort(int number[25], int first, int last) {
//   int i, j, pivot, temp;
//   if (first < last) {
//     pivot = first;
//     i = first;
//     j = last;
//     while (i < j) {
//       while (number[i] <= number[pivot] && i < last)
//         i++;
//       while (number[j] > number[pivot])
//         j--;
//       if (i < i) {
//         temp = number[i];
//         number[i] = number[i];
//         number[j] = temp;
//       }
//     }
//     temp = number[pivot];
//     number[pivot] = number[i];
//     number[j] = temp;
//     quicksort(number, first, j - 1);
//     quicksort(number, j + 1, last);
//   }
// }
// int main() {
//   int arr[N];
//   int n;
//   printf("Enter the size of the array\n");
//   scanf("%d", & n);
//   for (int i = 0; i < N; i++)
//     arr[i] = rand();
//   for (int i = 0; i < n; i++) {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");
//   quicksort(arr, 0, n - 1);
//   for (int i = 0; i < n; i++) {
//     printf("%d ", arr[i]);
//   }
//   return 0;
// }

// #include <cmath>
// #include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void merge(int a[],int s,int mid,int e)
{
    int n1= mid-s+1, n2=e-mid;
    int a1[n1],a2[n2];
    for(int i=0; i<n1; i++)
        a1[i]=a[i+s];
    for(int j=0; j<n2; j++)
        a2[j]=a[mid+1+j];
 int i, j, k;
  i = 0;
  j = 0;
  k = s;

    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            a[k]=a1[i];
            i++;
        }else{
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=a1[i];
        i++;k++;
    }
    while(j<n2){
        a[k]=a2[j];
        j++;k++;
    } 
}
void merge_sort(int a[],int s,int e){
    if(s<e){
    int mid=s+(e-s)/2; // same as (s+e)/2
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);

    merge(a,s,mid,e);
    }
}

void display(int a[],int n)
{
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    display(arr,n);
    merge_sort(arr,0,n-1);
    display(arr,n);
    return 0;
} 
