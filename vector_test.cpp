#include<iostream>
#include<vector>
using namespace std;
int main()
{

int n = 0 ;
cin>>n;

vector <int> array(n);
for (auto &x : array)
{
    cin>>x;
}

for (auto y : array )
{

    cout<<y;
}

return 0;

}