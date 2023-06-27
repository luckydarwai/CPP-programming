#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;
}