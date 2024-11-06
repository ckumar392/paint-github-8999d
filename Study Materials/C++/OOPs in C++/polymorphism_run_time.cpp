#include<iostream>
using namespace std;

class base{
    public:
    void print(){
        cout<<"this is base class print func"<<endl;
    }
};

class der : public base{
    public:
    void print(){
        cout<<"this is der class print func"<<endl;
    }
};
int main()
{
    //by this way we have changed the functionality at runtime like we converted the print function of the base class
    //to a print function of der class when needed.
    base* b1 = new der();
    b1->print();
    return 0;
}