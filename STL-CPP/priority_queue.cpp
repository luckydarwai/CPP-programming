#include<iostream>
#include<queue>
using namespace std;
int main() {
priority_queue<int> maxi ;
priority_queue<int,vector<int>,greater<int>> mini;
maxi.push(6); 
maxi.push(9); 
maxi.push(7); 
maxi.push(8); 
cout<<"size --> "<<maxi.size()<<endl;
int n=maxi.size();
for(int i=0;i<n;i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;
cout<<"checking priority_queue empty or not --> "<<maxi.empty()<<endl;
}