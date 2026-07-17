#include<iostream>
#include<string>
using namespace std;

int main()
{
    char ch = 'z';
    char cap;

    cout << ch << " - " << (int)ch << endl;

    cout << "Enter a capital character: ";
    cin >> cap;

    cap = cap + 32;
    cout << "Converting to lower case: " << cap << endl;

    // Converting a word to lower case
    string word = "HELLO";

    for (int i = 0; i < word.size(); i++)
    {
        word[i] = word[i] + 32;
    }

    cout << "Lowercase word: " << word << endl;

    // Converting a character to lower case to upper

    char ch;
    cout << "Enter a lowercase letter: ";
    cin >> ch;

    ch = ch + 32;
    cout << "Uppercase: " << ch << endl;

    

    return 0;
}