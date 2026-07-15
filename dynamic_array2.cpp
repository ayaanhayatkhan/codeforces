#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int> arr ;

arr.push_back(1);
arr.push_back(15);
arr[0] = 55;
arr.erase(arr.end() -1 );


for (auto x : arr )
{
cout<<x<<endl;
}



cout<<arr.size()<<endl;
}
