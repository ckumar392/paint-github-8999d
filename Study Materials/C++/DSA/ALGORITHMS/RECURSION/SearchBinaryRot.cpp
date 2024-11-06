#include<iostream>
using namespace std;
int findBinRot(int arr[],int num,int k)
{
    int s=0,e=num-1,mid;
    while(s<e)
    {

        mid=(s+e)/2;
        if(arr[mid]==k) return mid;
        // we will always find the sorted part so that we can further check 
        //if out element falls in the region of sorted part because its easy 
        // example we can eaisly be sure if 5 is present in sorted numbers [6,8,30,50,100] or not
        //but we cant say anything about unsorted because we dont know what happens in between
        //sorted part will have hign and low and all elements present will be greater than first and
        //smaller than the last element.
        if(arr[s]<arr[mid]){
            if(arr[s]<=k && k<=arr[mid])
                e=mid-1; // we here found that the element can be in this part hence we discard the other part ie right part 
            else    
                s=mid+1;// we didnt find it in this part so we discard this part and move to next part 
        }
        else{
            if(arr[e]>=k && arr[mid]<=k)
                s=mid+1;
            else 
                e=mid-1;
        }
        if(arr[mid+1]==k) return mid+1; 
        //interesting that sometimes the element cannot be found if its at mid+1
        //this line resoves this
    }
}
int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key =6;
    cout<<"the element is found at -->"<<findBinRot(arr,n,key)<<endl;
}