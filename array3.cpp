#include<iostream>
#include<vector>
using namespace std;
int main()
{

int n = 0 ;
cin >> n;
int lowest = __INT_MAX__;

vector <int> array (n);
cout<<"The size of array is :"<<endl;

for (auto &x : array)
{
    cin >> x;
}

// Finding difference 

for (int i = 0; i < array.size(); i++)
{
    for (int j = i+1; j < array.size(); j++)
    {
        int diff = abs(array[i] - array[j]);
         lowest = min(lowest,diff);
        //cout<<"The difference is :"<<diff<<endl;
    }

    
}

    cout<<"The lowest number is :"<<lowest<<endl;

return 0;


}