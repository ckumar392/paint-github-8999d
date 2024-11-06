#include<iostream>
using namespace std;


//meathod 1--> parameters as pointers 
//int func(int* arr);
// meathod 2--> parameters as a sized array
//int func2(int arr2[10]);
// meathod 2--> parameters as a sized array
//int func2(int arr2[]);


int * pass(int * chan) 

{
    static int n[15];
    for(int i = 0; i < 15; i++){
        n[i] = chan[i];
    }
    return n;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int * new_arr = pass(arr);
    cout<<*(new_arr+5);
    return 0;

}