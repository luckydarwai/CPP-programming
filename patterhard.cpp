#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin>>n;
    while (i <= n)
    {
        int j = 1;
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (j <= i)
        {
            cout << j;
            j++;
        }
        int a=j-2;
        while (a)
        {
            cout<<a;
            a--;
        }

        cout<<endl;

        i++;
    }
    return 0;
}