#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Lucky");
    q.push("Kumar");
    q.push("Darwai");
    cout<<"topmost element --> "<<q.front()<<endl;
    q.pop();
    cout<<"now front element --> "<<q.front()<<endl;
    cout<<"Size of queue is --> "<<q.size()<<endl;
    cout<<"queue is empty or not --> "<<q.empty()<<endl;
}