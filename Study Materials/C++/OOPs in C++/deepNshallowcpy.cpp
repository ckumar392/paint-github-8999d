#include<iostream>
using namespace std;
class flat
{
    private:
    char flat_section;
    public:
    int floor;
    int members;
    flat(int floor,int members,char flat_section) //parameterized constructors
    {
        this->floor=floor;
        this->members=members;
        this->flat_section=flat_section;
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
        cout<<endl;
        cout<<"Floor is : "<<this->floor<<endl;
        cout<<"Member(s) : "<<members<<endl;
        cout<<"Flat section is : "<<this->getflat_sec()<<endl;
        cout<<endl;
    }
};

int main()
{
    flat f1(3,5,'C'); //paremetrized constructor called 
    flat f2(f1);  //default copy constructor called
    f1.print();
    f2.print();
    return 0;
}