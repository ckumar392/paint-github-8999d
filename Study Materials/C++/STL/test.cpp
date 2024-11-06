#include<iostream>
using namespace std;

int main() {
    int t,n,variable_g,m,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int variable_c=0;
        cin>>n>>m>>variable_g;
        
        int array[n];

        for(j=0;j<n;j++)
        {
            cin>>array[j];
        }

        for(j=0;j<n;j++)
        {
            if(array[j]<=m && array[j]%variable_g==0)
            {
                variable_c++;
            }
        }
        cout<<variable_c<<endl;
    }
	// your variable_code variable_goes here
	return 0;
}