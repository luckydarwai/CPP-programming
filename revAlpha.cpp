#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    for (int i = 1; i <= n; i++)
    {
        int j=1;
        char ch='A'+n-i;
        while(j<=i)
        {
            cout<<ch<<" ";
            j+=1; 
            ch+=1;
        }
        cout << endl;
    }
}
