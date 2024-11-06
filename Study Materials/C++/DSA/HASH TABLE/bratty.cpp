// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;
// //string ke har word ke 1st element ko dusre strint me dalna hai
// int main()
// {
//     string pattern="a ball cat dog egg";
//     cout<<pattern<<endl;
//     string t="";
//     t.push_back(pattern[0]);
//     bool flag=false;
//     for(int i=0; i<pattern.length(); i++)
//     {
//         if(flag) t.push_back(pattern[i]);
//         if(isspace(pattern[i]))
//         {
//             flag=true;
//             continue;
//         }

//         else
//         {
//             flag =false;
//         }

//     }
//     cout<<"\t"<<t<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int i=0,j=0,k=0;
        while(n!=0 && m!=0)
        {
            n--;
            m--;
            if(arr1[i]<arr2[j])
            {
                ans.push_back(arr1[i]);
                i++;
            }
            else
            {
                ans.push_back(arr2[j]);
                j++;   
            }
            if(n)
            {
                while(n--)
                   ans.push_back(arr1[i++]);
            }
            if(m)
            {
                while(m--)
                    ans.push_back(arr2[j++]);
            }
        }
        for(auto x:ans) cout<<x<<" ";
    }

int main() {
	    // int arr1[]= {2, 2, 3, 4, 5}  ;
	    // int arr2[]={1, 1, 2, 3, 4};
	    // int N=sizeof(arr1)/sizeof(arr1[0]);
        // int M=sizeof(arr2)/sizeof(arr2[0]);
	    // findUnion(arr1,arr2, N, M);
        int num=0;
        while(num--)
        {
            cout<<num<<endl;
        }
	    cout << endl;
	
	return 0;
}