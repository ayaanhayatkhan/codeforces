#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> name = {'A','y','a','a','n',' ','H','a','y','a','t',' ','K','h','a','n'};

    // 1. Display all elements
    cout << "Name: ";
    for (auto x : name)
    {
        cout << x;
    }

    cout << "\n";

    // 2. Display in reverse
    cout << "Reverse: ";
    for (int i = name.size() - 1; i >= 0; i--)
    {
        cout << name[i];
    }

    cout << "\n";

    // 3. Display 5th and last element
    cout << "5th Element: " << name[4] << endl;
    cout << "Last Element: " << name[name.size() - 1] << endl;

    // 4. Display size
    cout << "Size: " << name.size() << endl;
    if(!name.empty())
        cout<<"Array is not empty "<<endl;

  
  
        // 5. Printing vector array with iterator
    cout<<"Printing array iterator with :"<<endl;
    for (auto it = name.begin(); it != name.end(); ++it)
    {
        cout << *it;
    }
    



    return 0;
}