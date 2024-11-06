#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a = 10;
    void *p = &a; // p is a void pointer
    cout<<p<<endl<<*(int*)p<<endl;  // p is a void pointer, so we have to cast it to int pointer
    int *q = NULL; // q is a NULL pointer and does not point to any memory location 
    //cout<<q<<endl;

    //dangling pointer is a pointer that points to a memory location that that doesnt exist 
    free(p); // free() is a function that frees the memory allocated to the pointer
    //cout<<p<<endl; //this will give a dangling pointer error and can give segmentation fault

    return 0;
}
