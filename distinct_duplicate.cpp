#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main()
{

// Distinct and duplicate both program.

array <int , 5> array={1,2,3,1,2};

vector <int> duplicate;
vector <int> distinct;

cout<<"Dupclicate numbers in an array are :"<<endl;

    for (int i = 0; i < array.size(); i++)
    {
        bool found = false;
            for (int j = 0; j < i; j++)
            {
                if (array[i] == array[j])
                {
                    found = true;
                    break;
                }
            }
            
            if (found)
            {
                duplicate.push_back(array[i]);
            }
            else
            {
                distinct.push_back(array[i]);
                
            }
    }
    
    // Printing duplicate number . 

    cout<<"Duplicate numbers :"<<endl;
    for (auto x : duplicate)
    {
        cout<<x<<endl;
    }

    // Printing distinct number . 

    cout<<"Distinct numbers :"<<endl;
    for (auto y : distinct)
    {
        cout<<y<<endl;
    }
    
    
}