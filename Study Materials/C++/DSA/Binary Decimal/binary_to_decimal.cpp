#include<iostream>
#include<math.h>
using namespace std;

void binary_to_decimal(int binary)
{
    int decimal=0;
    int n=0;
    while(binary!=0)
    {
        int last=binary%10;
        binary=binary/10;
        decimal +=last*pow(2,n);
        n++;
    }
    cout<<"Decimal is "<<decimal<<endl;
}

void decimal_to_binary(int decimal)
{
    int binary=0;
    int n=0,p=0;
    while(decimal>0){
        binary+= decimal%2*pow(10,p);
        decimal=decimal/2;
        p++;
    }
    cout<<"binary is "<<binary<<endl;
}

int main()
{
    cout<<"Enter the binary number to be converted to decimal: "; 
    int bin;cin>>bin;
    binary_to_decimal(bin);
    cout<<"Enter the binary number to be converted to decimal: ";
    int dec;cin>>dec;
    decimal_to_binary(dec);
    return 0;
}