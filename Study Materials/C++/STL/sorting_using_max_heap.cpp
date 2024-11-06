#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int arr[]= {23,33,1,78,99,100};
    priority_queue<int> queue(arr,arr+sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<queue.top()<<" ";
        queue.pop();
    }
    return 0;   
}