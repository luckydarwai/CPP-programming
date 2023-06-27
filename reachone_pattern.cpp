#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int k=i;
//        for (int j = 1; j<=i; j++)
//        {
//        cout<<k<<" ";
//        k-=1;
//        }
       
//         cout << endl;
//     }

//     // return 0;
// }
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
       for(int j=1;j<=i;j++)
       {
        cout<<i-j+1<<" ";
       }
        cout << endl;
    }

    // return 0;
}