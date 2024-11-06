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
    flat f1;
    f1.setflat_sec('C');
    cout<<f1.floor<<endl;
    cout<<f1.getflat_sec();
    return 0;
}