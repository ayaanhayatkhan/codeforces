#include<iostream>
#include <array>
using namespace std;
int main()
{

    // to find distinct numbers in a std::array
    array<int,5> arr = {1, 1, 3, 1, 2};

    cout<<"Distinct numbers in the array are : ";

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