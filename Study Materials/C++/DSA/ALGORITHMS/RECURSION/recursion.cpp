#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==0) return 1;
    else {
        return fact(n-1)*n;
    }
}

int pow_better(int m,int n)
{
    if (n==0) return 1;
    if(n%2==0) return pow_better(m*m,n/2);
    else return m*pow_better(m*m,(n-1)/2); 

}

int pow(int n, int d)
{
    if(d==0) return 1;
    return pow(n,d-1)*n;
}

void rec(int n)
{
    if(n>0){
        cout<<n<<"\n"; 
        rec(n-1);
        cout<<n<<"\n"; 
    }
    return void();
}

int rec2(int n)
{
    if(n>0){
        return rec2(n-1)+n;
    }
    return 0;

}
int rec_tree(int n)
{
    if(n>0){
        cout<<n<<"\n";
        rec_tree(n-1);
        rec_tree(n-1);
    }
}

int main()
{
    //rec(5);
    cout<<rec2(5);
    // //rec_tree(5);
    // cout<<pow(2,6)<<endl;
    // cout<<pow_better(2,6);
    return 0;  
}