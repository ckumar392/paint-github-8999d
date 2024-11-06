#include<iostream>
using namespace std;
int  r[10]; //this will work without static because it is globally declared
int *  array_returning_function()
{
//    static int  r[10]; //we must use static because dosnt allow to return address of a local variabl
   for (int i = 0; i < 10; ++i) {
    r[i] = i;
   }
   return r;
}
int main()
{
    int * arr;
    arr= array_returning_function();
    for ( int i = 0; i < 10; i++ ) {
      cout << "*(arr + " << i << ") : ";
      cout << *(arr + i) << endl;
   }

    return 0;   
}