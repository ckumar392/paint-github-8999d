#include<iostream>
using namespace std;
class ClassA {
public:
	void set_a(int val);
	int get_a(void);

private:
	int a;
};
int ClassA::get_a(void) {
	return a;
}
void ClassA::set_a(int val) {
	a = val;
}
int main() {
	ClassA a;
	a.set_a(20); 
	cout << "Value of a is: " << a.get_a(); 
	return 0;
}