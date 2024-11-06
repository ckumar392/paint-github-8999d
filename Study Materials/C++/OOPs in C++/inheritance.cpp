#include<iostream>
using namespace std;
class flat // we need to explicitly add the default constructors to the flat else we ll get an error
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
    char getSec()
    {
        return this->flat_section;
    }
    void print()
    {
        cout<<"Floor is : "<<this->floor<<endl;
        cout<<"Member(s) : "<<members<<endl;
        cout<<"Flat section is : "<<this->flat_section<<endl;

    }

};

class flatName : public flat
{
    public:
    int strength;
    bool males;
    bool females;
    flatName(int strength, bool males, bool females)
    {
        this->strength = strength;
        this->males=males;
        this->females=females;
        this->floor=floor;
        this->members=members;
    }
    flatName()
    {

    }
    void print()
    {
        cout<<"Floor is : "<<this->floor<<endl;
        cout<<"Member(s) : "<<members<<endl;
        cout<<"Flat section is : "<<this->getSec()<<endl;
        cout<<"are males present : "<<males<<endl;
        cout<<"are females present : "<<females<<endl;
        cout<<"total strength of the flat : "<<strength<<endl;

    }

};

int main()
{
    flat f1(3,5,'C'); //paremetrized constructor called 
    flatName c1(5,1,1);
    // f1.print();
    c1.print();
    

    return 0;
}