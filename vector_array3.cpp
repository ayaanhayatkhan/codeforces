#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector < int > x = {13,42,83};
for (auto &t : x)

{
    cin>>t;
}

for (auto i : x)
{
    /* code */
    cout<<i;
}


return 0 ;


}