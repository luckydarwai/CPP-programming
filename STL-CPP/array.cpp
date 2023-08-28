#include<iostream>
#include<array>
using namespace std;
int main()
{
   array<int,5> arr={1,2,3,4,5};
   int s=arr.size();
   for (int i = 0; i < s; i++)
   {
    cout<<arr[i]<<endl;
   }
   
   cout<<"get element at index using stl array : "<<endl;
   cout<<arr.at(2)<<endl;

   cout<<"check array empty or not : "<<arr.empty()<<endl;

   cout<<arr.front()<<endl<<arr.back()<<endl;
   

}