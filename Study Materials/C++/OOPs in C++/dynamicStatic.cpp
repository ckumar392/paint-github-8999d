#include<iostream>
using namespace std;

class flat
{
    private:
    char flat_section;
    public:
    int floor;
    string name;
    int members;

    void setflat_sec(char c)
    {
        flat_section=c;
    }
    char getflat_sec()
    {
        return flat_section;
    }
};
int main()
{
    flat f1; //static
    f1.setflat_sec('A');
    cout<<f1.getflat_sec()<<endl;
    flat *f2=new flat; //dynamic allocated
    //hero pointer f2 will 
    f2->setflat_sec('C');
    cout<<f2->getflat_sec()<<endl; 
    return 0;
}