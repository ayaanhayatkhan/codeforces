#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int num = 0 ;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            found = true;
            break;
        }
        
        else
        {
            found = false;

        }

    }
    if(found)
    cout<<"Found"<<endl;
    else
    cout<<"Not found"<<endl;


    return 0;
}