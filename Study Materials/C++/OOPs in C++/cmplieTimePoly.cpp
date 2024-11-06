#include <iostream>
using namespace std;

// implementation using function overloading
class stud
{
public:
    void print()
    {
        cout << "func without arguments";
    }

    void print(int arg)
    {
        cout << "func with int arguments";
    }

    void print(double arg)
    {
        cout << "func with double arguments";
    }

    // we cannot overload the function just by changing
    //  int print(double arg){
    //      cout<<"func with just diff return type";
    //  }
};

// implementation using operator overloading
class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        // default constructor is needed in case we dont initialize r and i
    }
    Complex(int r, int i)
    { // parameterized constructor initialization of r and i to 0
        real = r;
        imag = i;
    }

    Complex operator+(Complex obj)
    { // overloading + operator
        // we are returning the complex type data so we have declared return type of the function as complex
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    stud s1;
    s1.print();
    s1.print(5);
    s1.print(433.4); // this hows function overloading
    cout << "\n\n\n";
    Complex c1(10, 10), c2(20, 30);
    Complex c3;
    c3 = c1 + c2;
    c3.print();

    return 0;
}