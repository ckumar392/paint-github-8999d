#include<iostream>
using namespace std;
int i=0;

int* linearRec(int arr[],int n,int key,int ind,int put[])
{
    if(ind>n)
    {
        return put;
    } 
    if(arr[ind]==key)
    {
        cout<<"found at "<<ind+1<<endl;
        put[i]=ind;
        i++;
    } 
    return linearRec(arr,n,key,ind+1,put);
}

int main()
{
    cout<<"Enter the size of array-->"<<endl;
	int n;cin>>n;
	int arr[n],ans[n],key,i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the number to be found-->"<<endl;
	cin>>key;
    int* ptr; //pointer to hold address
	ptr = linearRec(arr,n,key,0,ans); //address of a
    int run=sizeof(ptr)/sizeof(ptr[0]);
	cout<<"Found at index -->";
	while(run--)
		cout<<ptr[run]+1<<"\t";
    return 0;
}