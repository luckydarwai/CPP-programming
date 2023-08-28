#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[14]="Lalit";
    m[23]="Lucky";
    m[10]="Ravi";
    m.insert({6,"Child"});
 for(auto i:m)
 {
    cout<<i.first<< "  "<<i.second<<endl;
 }

    
}