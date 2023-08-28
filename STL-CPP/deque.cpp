#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(10); // 10 is inserted at the end of queue
    d.push_front(-5);// -5 is inserted in front of queue
    for (auto i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size --> "<<d.size()<<endl;
    cout<<"index --> "<<d.at(1)<<endl;
    cout<<"front : "<<d.front()<<" "<<"back : "<<d.back()<<endl;
    
    d.pop_front();
    for (auto i : d)
    {
        cout<<i<<" ";
    }
    d.erase(d.begin(),d.begin()+1);
   

}