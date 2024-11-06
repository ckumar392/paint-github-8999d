#include<iostream>
using namespace std;

int recBinary(int arr[],int key, int s, int e)
{
	if(s>e)
	{
		cout<<"Not found"<<endl;
		return -1;
	} 
	int mid=(s+e)/2;
	if(arr[mid]==key)
	{

		cout<<"\nFound at ->"<<mid<<endl;
		return mid;
	}
		
	if(arr[mid]>key)
	{
		return recBinary(arr,key,s,mid-1);
	}
	return recBinary(arr,key,mid+1,e);
}

int main()
{
	cout<<"Enter the size of array-->";
	int n;cin>>n;
	int arr[n],key,i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number to be found-->\n";
	cin>>key;
	recBinary(arr,key,0,n-1);
	return 0;
}