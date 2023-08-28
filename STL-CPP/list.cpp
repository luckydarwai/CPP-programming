#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> v;
    list<int> v1(5, 1);
    cout << v1.size() << endl;

    cout << "check size -> " << v.size() << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.erase(v.begin());
    for (int i : v)
    {
        cout << i << endl;
    }

    cout << "check size -> " << v.size() << endl;

    cout << "get front element -> " << v.front() << endl;
    cout << "get last element -> " << v.back() << endl;
    v.pop_back();
    cout << "popint element form vector -> " << endl;
    for (auto i : v)
    {
        cout << i << endl;
    }
}