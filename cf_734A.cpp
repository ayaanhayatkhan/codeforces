#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int Anton = 0;
    int Danik = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            Anton++;
        }
        else if (s[i] == 'D')
        {
            Danik++;
        }
    }

    if (Anton > Danik)
    {
        cout << "Anton"<<endl;
    }
    if (Danik > Anton)
    {
        
       cout << "Danik"<<endl;


    }
    
    if (Anton == Danik)
    {
        
         cout << "Friendship"<<endl;

    }
    
    return 0;
}