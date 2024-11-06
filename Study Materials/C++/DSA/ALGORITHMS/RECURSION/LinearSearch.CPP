#include<iostream>
using namespace std;

bool linearRec(int arr[],int n,int key,int ind)
{
    if(ind>n)
    {
        cout<<"not found!!"<<endl;
        return false;
    } 
    if(arr[ind]==key)
    {
        cout<<"found at "<<ind+1<<endl;
        // return true;
        // commented out to give results at multiple occurrences
    } 
    return linearRec(arr,n,key,ind+1);
}
int main()
{
    cout<<"Enter the size of array-->"<<endl;
	int n;cin>>n;
	int arr[n],key,i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number to be found-->"<<endl;
	cin>>key;
    linearRec(arr,n,key,0);
    return 0;
}