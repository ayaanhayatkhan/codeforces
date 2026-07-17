#include<iostream>
#include<string>
using namespace std;
int main()
{

    string word ;
    cin>>word;

    int small = 0 ;
    int capital = 0 ;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            small++;

        }
        
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            capital++;
        }
        
    }

    
    if (small >= capital)
    {
        for (int  i = 0; i < word.size(); i++)
        {
           if (word[i] >= 'A' && word[i] <= 'Z')
           {
            
            word[i] = word[i] + 32;
           }
           
        }
    }
    if (small < capital)
    {
        for (int  i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                
                word[i] = word[i] - 32;
            }

        }
        
    }

    cout<<word<<endl;
}