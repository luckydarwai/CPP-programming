#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    int a = 5;
    int b = 10;
    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;
    swap(a, b);
    cout << "After Swaping -> "
         << "a : " << a << " "
         << "b : " << b << endl;
    cout << "Print Vector : " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(),v.end());
    cout<<"After sorting the vector is : "<<endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    reverse(v.begin(),v.end());
    cout<<"After reversing the vector is : "<<endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

}