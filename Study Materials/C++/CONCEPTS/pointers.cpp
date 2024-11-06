#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int c = 40;
    cout << "value of a --> " << a << endl;
    cout << "printing &a --> " << &a << endl;
    int *p = &a;  //*p holds value at address p while p holds the address
    int **q = &p; //**q holds the value at address of p
    cout << "Value of p (*p=&a) is " << p << endl
         << "value of *p is " << *p << endl
         << "value of &p is " << &p << endl;
    cout << "--------------------------------\n\n";
    cout << "vlaue of q is " << q << endl
         << "value of *q is "
         << "value of *q is " << *q << endl
         << "value of **q " << **q << endl
         << "value of &q " << &q << endl;

    cout << "--------------------------------\n\n";

    *p = 20; // if the value of pointer is changed the number is also changed
    a++;
    cout << a << endl
         << &a << endl;
    cout << *p << endl
         << p << endl;
    cout << "--------------------------------\n\n";
    cout << p + 6 << endl;
    cout << "--------------------------------\n\n";

    int hell[10];
    hell[0] = 90;
    cout << hell << endl;
    cout << *hell << endl;
    cout << hell + 2 << endl; // this is the address of third element address is increased by 4 because of int data type
    cout << &hell[2] << endl;
}
