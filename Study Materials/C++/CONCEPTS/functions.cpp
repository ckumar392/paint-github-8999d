#include<iostream>
using namespace std;
// A function that takes two integers as parameters
// and returns an integer
int max(int,int);

// A function that takes an int pointer and an int variable as parameters
// and returns a pointer of type int
int *swap(int*,int);

// A function that takes a charas parameters
// and returns an reference variable
char *call(char b);

// A function that takes a char and an int as parameters
// and returns an integer
int fun(char, int);
int fun(int a ,int b); 
//this function fun is overloaded with the same name but different parameters 
int call_by_value(int a){
    return a;
}
int call_by_reference(int* a){
    return *a;
}

//Friend function

// passing array to a function
float add(float num[]) {
  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
    sum += num[i];
  }
  return sum;
}
int main()
{
    float data[] = {2, 8, 4, 12}; //for array passing to functions
    cout<<add(data)<<endl; //for array passing to functions
    int a=10,b=6,c=9,d=11;
    cout<<call_by_reference(&a)<<endl;
    cout<<call_by_value(a)<<endl;
    cout<<max(c,d);
    return 0;
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}