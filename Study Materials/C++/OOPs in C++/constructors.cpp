#include<iostream>
using namespace std;
class flat
{
    private:
    char flat_section;
    public:
    int floor;
    int members;

    flat() // behaves as default constructor 
    {
        //so that if we dont pass any value while declaring a object it doesnt throw error
    }

    flat(int floor,int members,char flat_section) //parameterized constructors
    {
        this->floor=floor;
        this->members=members;
        this->flat_section=flat_section;
    }
    flat(flat& temp) //copy constructor created. 
    {
        // we need to pass by referece because if we dont we are stuck in infinite loop where
        // this constructor tries to make copies again and again when we pass by value .
        this->floor=temp.floor;
        this->members=temp.members;
        this->flat_section=temp.flat_section;
    }
    void setflat_sec(char c)
    {
        flat_section=c;
    }
    char getflat_sec()
    {
        return flat_section;
    }
    void print()
    {
        cout<<"Floor is : "<<this->floor<<endl;
        cout<<"Member(s) : "<<members<<endl;
        cout<<"Flat section is : "<<this->getflat_sec()<<endl;

    }
};

int main()
{
    flat f1(3,5,'C'); //paremetrized constructor called 
    flat f2(f1);  //copy constructor generated and called, here we have created but not needed
    // flat f2=f1; same thing
    f1.print();
    f2.print();
    return 0;
}