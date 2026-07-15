#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,10> arr = {1,2,3,4,5,6,7,8,9,7};

    // 1. Display the array using range-based for loop
    cout << "Array Elements: ";
    for (auto x : arr)
    {
        cout << x << " ";
    }

    cout << "\n";

    // 2. Display the array in reverse
    cout<<"Reverse Order: ";

   
    for (int i = arr.size()-1; i >= 0; i--)
    {
    cout << arr[i] << " ";
        
    }

    cout << "\n";
    

    // 3. Display the 5th and last element
    cout << "5th Element: " << arr[4] << endl;
    cout << "Last Element: " << arr[arr.size() - 1] << endl;

    return 0;
}