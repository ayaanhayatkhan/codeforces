#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string arr = "xiaodao";
    int size = arr.size();
    vector <char> v;

    cout << "Distinct characters are:\n";

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
        {
            //cout << arr[i] << " ";
            v.push_back(arr[i]);

        }
            
    }
    
    cout<<v.size()<<endl;
    for (auto x : v)
    {
        cout<<x;
    }
    cout<<endl;
    if(v.size()%2==0)
    cout<<"Chat with Her"<<endl;
    else
    cout<<"Ignore Him"<<endl;


    return 0;
}