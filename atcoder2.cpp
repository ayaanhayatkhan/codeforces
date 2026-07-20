#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main()
{

    int n  ; 
    int m ; 
    cin>>n;
    cin>>m;
    int count = 0;
    vector <int > arr;
    vector <int> brr;
    for (int  i = 0; i < n; i++)
    {
       cin>>arr[i]; 
        
    }
    for (int j = 0; j < m; j++)
    {
    cin>>brr[j];
    }
    // Operations
    for (int k = 0; k < n; k++)
    {
       arr[k] = arr[k]+1;
       if (brr[k] == (arr[k] + arr[k]+1)/m)
       {
        count++;

       }
       

    }


    
    
    
}