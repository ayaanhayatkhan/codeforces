#include<iostream>
using namespace std;
int main ()
{

    int h = 0;
    int w = 0;
    float height =0.0;
    float bmi = 0.0;
    cin>>h;
    cin>>w;
    height = h / 100.0;
    
     bmi = w/height/height;
    if (bmi >= 25)
    {
        cout<<"Yes";
    }
    else
    cout<<"No";

 return 0;



}