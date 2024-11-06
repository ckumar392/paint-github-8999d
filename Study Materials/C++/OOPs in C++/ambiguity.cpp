#include<iostream>
using namespace std;
class A
{
    public:
    void func()
    {
        cout<<"somethingA"<<endl;
    }
    
};
class B
{
    public:
    void func()
    {
        cout<<"somethingB"<<endl;
    }
    
};
class C : public A, public B{
};
int main()
{
    C objC;
    // objC.func();
    objC.A::func();

    return 0;
}