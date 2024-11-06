#include <deque>
#include <iostream>

using namespace std;

int main()
{
    // Creates and initializes the
    // Deque with following elements
    int arr[]= { 10, 15, 30, 5, 12 };

    deque<int> dq(arr,arr+sizeof(arr)/sizeof(arr[0]));

    // Get the iterator to the first element
    // of the Deque
    auto it = dq.begin();

    // Increment iterator to second element
    it++;

    // Insert an element 20 at position
    // pointed by 2, that is, second position
    dq.insert(it, 20);

    // Deque now wil be: 10, 20, 15, 30, 5, 12

    // Pop front and back elements
    dq.pop_front();
    dq.pop_back();

    // Deque now is: 20, 15, 30, 5

    // Print current size of Deque
    cout << "Deque Size: " << dq.size() << endl;

    // Print element pointed by iterator it
    cout << "Iterator it points to: " << (*it) << "\n";

    
    dq.insert(dq.begin()+2,3,2);

    // Print elements of Deque using random
    // access
    cout << "Curret Deque: ";
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;

    return 0;
}