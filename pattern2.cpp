#include<iostream>
using namespace std;
int main()
{
   int n,i=1;
   cin>>n;
   while(i<=n)
   {
    int j=i;
    while (j!=0)
    {
        cout<<j<<" ";
        j--;
    }    
    cout<<endl;
    i++;
   }



    return 0;
}