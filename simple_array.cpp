#include<iostream>
using namespace std;
int main()

{
int arr[5] = {2,3,4,5,2};
// 1. display the whole array
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}

// 2. find the sum of all numbers in the array

int sum = 0;
for (int i = 0; i < 5; i++)
{
 sum = arr[i]+ sum; // sum +=arr[i]
cout<< i<<"-itteration = "<<sum<<endl;
}

cout<<"The sum is : "<<sum<<endl;


//3. search the number in array

int num=0;
cout<<"Enter a number"<<endl;
cin>>num;

bool found = false;

for (int i = 0; i < 5; i++)
{

    if (arr[i]==num)
    {
        found = true;
        break;
    }
else 
    {
        found = false;
    }
}

if(found)
cout<<"Match found"<<endl;
else
cout<<"Not found"<<endl;

// 3. To count the number of times a match is found

int count = 0;
    for (int i = 0; i < 5; i++)
    {
        
        if (num == arr[i])
        {
            count++;
        }
        

    }
    
    if (count>0)
    {
        cout<<"Match found :"<<count<<" times."<<endl;
    }
    
}