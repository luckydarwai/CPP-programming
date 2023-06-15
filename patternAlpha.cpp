#include<iostream>
using namespace std;
int main()
{

  int n,row=1;
  cin>>n;
  while (row<=n)
  {
    int col=1;
    char ch='A'+row+col-2;
    while (col<=n)
    {
        cout<<ch;
        ch++;
        col++;
    }
    cout<<endl;
    row+=1;
  }
  

    return 0;
}