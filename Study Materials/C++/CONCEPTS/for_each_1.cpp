#include <iostream>
#include <algorithm>

using namespace std;

//for each loop is used to iterate over the elements of a container
//it does not requires any initialization or condition

int main(){
    int n;
    cout<<"\n enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"\n enter the elements of the array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n The elements of the array printed by normal for loop ->>\n";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<"\n The elements of the array printed by for each loop ->>\n";
    for(int j:arr){
        cout<<j<<"\n";
    }
    return 0;
    
}