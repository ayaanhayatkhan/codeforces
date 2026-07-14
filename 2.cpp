#include <iostream>
#include<string.h>
using namespace std;

int main()

{
    // Display the array elements
    string name = "Ayaan Hayat Khan";

    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i];
    }

   // Display the array elements in reverse

    for (int i = name.size() -1; i >= 0  ; i--)
    {
        cout<<"\nIn reverse order :"<<name[i];
    }
    

    // Display the 5th and last element

  
    cout << "\n5th element = " << name[4] << endl;
    cout << "\nLast element = " << name[name.size() -1 ];


    return 0;
}