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
    /* code */
    cin>>x;
}

for (auto y : array )
{
    /* code */
    cout<<y;
}

//cout<<"The numbers of n are :"<<array[]<<endl;

return 0;

}