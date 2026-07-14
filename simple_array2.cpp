#include<iostream>
using namespace std;
int main()
{

int arr[] = {1,2,3,4,5,6,7,8,9,7};
int n = sizeof(arr)/sizeof(arr[0]);

// 1. Display the array

for (int  i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;

}

// 2. find the sum of whole array

int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
        //cout<< i<<"-itteration = "<<sum<<endl;
    }
    cout<<"The sum is :"<<sum<<endl;

    // 3. search the number in an array

    int num = 0 ;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    bool found = false;
    for (int i = 0; i < n; i++)
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

    // 4. To count the number of times a match is found

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            count++;
        }
        if (count>0)
        {
        cout<<"Match found :"<<count<<" times."<<endl;
        }
    }

    // 5. Display the array elements in reverse.


    cout<<"Array in reverse order "<<endl;

    for (int i = n-1; i >= 0; i--)
    {
        cout<< arr[i] <<endl;

    }
    
    
   // 6. Display the 5th, and last element of the array.



    //int arr[10] = {1,2,3,4,5,6,7,8,9,};

    cout << "5th element: " << arr[4] << endl;
    cout << "Last element: " << arr[n-1] << endl;
 
    // Find the average of the array and display using the sum and array size.

  
    float avg = (float)sum / n;
        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;

        // 8. find the min and max of array

        
        int max = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i]>max)
            {
                max = arr[i] ;
            }
            
            
        }

        cout<<"The maximum value is :"<<max<<endl;
        
        // To find the minimum
        int min = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            
        }

        cout<<"The minimum value is :"<<min<<endl;
}