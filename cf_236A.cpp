#include<iostream>
#include<string>
using namespace std;

int main()
{

string name ;
cin>>name;
int count = 0 ;

for (int  i = 0; i < name.size(); i++)
    {
    bool found = false;
        for (int j = 0; j < i; j++)
        {
            if (name[i] == name[j])
            {
                found = true;
                break;

            }
            
        }

        if (found == false)
        {   
            count++;
            
        }
        
    }
    if (count % 2 == 0)
    {
        /* code */
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    cout<<"IGNORE HIM!"<<endl;    

return 0;

}
