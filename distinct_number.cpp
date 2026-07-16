#include<iostream>
using namespace std;
int main ()
{

// find distinct numbers 

int arr[] = {11,12,13,21,11};
int size = sizeof(arr)/sizeof(arr[0]);

cout<<"Distinct numbers in array are : "<<endl;
for (int i = 0; i < size; i++)
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

    if (!found)
        cout<<arr[i]<<" ";
        else
        continue;
}



}