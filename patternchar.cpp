#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int i=1;
    //    char ch='A';
    //    while (i<=n)
    //    {
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout<< ch << " ";
    //         j++;

    //     }
    //     cout<<endl;
    //     ch++;
    //     i++;
    //    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n ;j++)
        {
           char ch='A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}