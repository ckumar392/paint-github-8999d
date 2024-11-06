#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq1; // by default max priority_queue is used 
    pq1.push(5);
    pq1.push(10);
    pq1.push(15);
    pq1.push(20);
    pq1.push(25);
    cout<<pq1.top()<<endl;
    priority_queue<int, vector<int> , greater<int> > pq2; //to implement minimum priority queue 
    pq2.push(5);
    pq2.push(10);
    pq2.push(15);
    pq2.push(20);
    pq2.push(25);
    cout<<pq2.top()<<endl;
    pq2.pop();
    cout<<pq2.top()<<endl;
}