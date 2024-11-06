#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // Creating a Queue using STL
    queue<int> q;
    
    // The push function inserts elements
    // at the end of Queue
    q.push(10);
    q.push(20);
    q.push(30);
    
    // After above operations, Queue will 
    // look like:
    //     ****** 
    //     * 30 * <- Queue's rear end
    //     * 20 *
    //     * 10 * <- Queue's front
    //     ******
    
    // This will print the current size 
    // of queue which is 3
    cout<<q.size()<<endl;
    // This will print the front and back elements 
    // of the queue which are 10 and 30
    cout<<q.front()<<" "<<q.back()<<endl;
    
    // This will delete the front element 
    // of the Queue
    q.pop();
    
    // This will again print the front and back  
    // elements of the queue which are 20 and 30
    cout<<q.front()<<" "<<q.back()<<endl;
    queue<string> q2;
    q2.push("5");
    q2.push("6");
    cout<<q2.front()<<" "<<q2.back()<<endl;
    string curr = "hello there";
    q2.push(curr+"6");
    cout<<q2.front()<<" "<<q2.back()<<endl;
    return 0;
}