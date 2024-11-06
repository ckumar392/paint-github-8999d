#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//using synatx for_each(from,to,function_or_any_container)


void mul2(int a)
{
    cout << a * 2 << " ";
}


struct multiple3
{
    void operator() (int a)
    {
        cout << a * 3 << " ";
    }
} mul3;
 

int main(){
    int arr[5] = { 1, 5, 2, 4, 3 };
    cout << "Multiple of 2 of elements are : ";
    //using arrays 
    for_each(arr, arr + 5, mul2);
    //using class objects with array
    cout << "Multiple of 3 of elements are : ";
    for_each(arr, arr + 5, mul3);
    //using vectors
    vector<int> v = { 4, 5, 8, 3, 1 };
    //using vectors with class objects
    cout << "Multiple of 3 of elements are : ";
    for_each(v.begin(), v.end(), mul3);
    //using vectors with function objects
    cout << "Multiple of 3 of elements are : ";
    for_each(v.begin(), v.end(), mul2);

}