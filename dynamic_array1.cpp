#include<iostream>
#include<array>
#include<vector>
//using namespace std;
int main()
{
    // Standard array

   std:: cout<<"Hello World\n";
   std::array<int , 5> arr;
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;

        std::cout<<arr[i]<<"\n";

    }

    // Dyanamic array
    
    std::vector <int> v ;
     
    v.push_back(5);
    v.push_back(6);

        for (int  i = 0; i < v.size(); i++)
        {
            std::cout<<v[i]<<"\n";
        }
        // second method to display dynamic array

        for (int i : v)
        {
            std::cout<<i<<"\n";
        }
        
        // Third method to display the dynamic array
        for (auto element:v)
        std::cout<<element<<"\n";
    

}