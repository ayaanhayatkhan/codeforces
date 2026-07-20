#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{

    string word1 = "Ayaan";
    string word2 = word1;
    int sdigit[word1.size()];

    for (int i = 0; i < word1.size(); i++)
    {
      word1[i]  = toupper(word1[i]);
      word2[i]  = tolower(word1[i]);
      sdigit[i]  = isdigit(word1[i]);


    }

    

    cout<<word1<<endl;
    cout<<word2<<endl;
    for (int i = 0; i < word1.size(); i++)
    {
            cout << sdigit[i] << " ";
    }
    
    cout<<endl;



return 0;

}