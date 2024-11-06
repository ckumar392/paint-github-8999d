#include<iostream>
using namespace std;
class flat
{
    private:
    char flat_section;
    public:
    int floor;
    int members;
    flat()
    {

    }
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
        cout<<"Floor is : "<<this->floor<<endl;
        cout<<"Member(s) : "<<members<<endl;
        cout<<"Flat section is : "<<this->getflat_sec()<<endl;

    }
    ~flat()
    {
        cout<<"destructor simps now"<<endl;
    }
};

int main()
{
    flat f1(3,5,'C'); //paremetrized constructor called 

    f1.print();
    flat* f2=new flat();
    f2->floor=2;
    cout<<f2->floor;
    delete f2; //we need to call destructors manually as it was allocated dynamically

    return 0;
}