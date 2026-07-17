#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word ;

    cout<<"Enter a word:";
    cin>>word;

    if (word[0] >= 'a' && word[0] <= 'z')
    {
        word[0] = word[0] - 32;
    }

    for (int i = 1; i < word.length(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] + 32;

            }
            
        }
        cout << "Output: " << word << endl;
        return 0;
    
}