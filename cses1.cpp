#include<iostream>
#include<vector>
using namespace std;

int main()
{

int n = 0;
int number = 0;
cin>>n;
vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    
    //cin>>number;
    //arr.push_back(number);
    cin>>arr[i];

  }
  
  for (int i = 0 ; i < arr.size(); i++)
  {

    cout<<arr[i]<<endl;
 }
  

}