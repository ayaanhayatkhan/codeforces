#include<iostream>
#include <array>
using namespace std;
int main()
{

    // to find distinct numbers in array
    array<int,6> arr = {1, 6 , 4, 1, 5 , 6};

    cout<<"Distinct numbers in the array : ";

    for (int i = 0; i < arr.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        
        if (found == false)
            cout<<arr[i]<<" \n";
            else
            continue;
    }

    return 0;
}