#include<iostream>
using namespace std;
int main()
{
   int n,i=1;
   cin>>n;
   while (i<=n)        
   {
    char ch=1;
    int j=1;
    while (j<=n)
    {
        cout<< ch << " ";
        ch++; 
        j++;
        
    }
    cout<<endl;
    i++;
   }
   


    return 0;
}