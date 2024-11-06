// this code shows using of pure virtual functions and abstract classes 
#include <iostream>
using namespace std;

class inst {
    public:
    virtual void make_sound(){
        cout<<"the inst is playing!"<<endl;
    }
};

class flute : public inst {
    public:
    void make_sound(){
        cout<<"the flute is playing!"<<endl;
    }
};

 
int main()
{
    inst i2;
    i2.make_sound();
    inst* i1 = new flute();
    i1->make_sound();
    inst i3 = flute();
    i3.make_sound();
    inst* i4 = new flute();
    i4->make_sound();
    return 0;
}