#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Lucky");
    s.push("Kumar");
    s.push("Darwai");
    cout<<"topmost element --> "<<s.top()<<endl;
    s.pop();
    cout<<"poping element --> "<<s.top()<<endl;
    cout<<"Size of stack is --> "<<s.size()<<endl;
    cout<<"stack is empty or not --> "<<s.empty()<<endl;
}