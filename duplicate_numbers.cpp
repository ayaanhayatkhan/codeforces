#include <iostream>
#include<array>
using namespace std;

int main()
{
    array <int ,6> arr = {2, 5, 7, 5, 9, 2};
    int n = arr.size();

    cout << "Duplicate numbers: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break; 
            }
        }
    }

    return 0;
}