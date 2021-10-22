#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int len = sizeof(arr)/sizeof(arr[0]); // calculates length of array
    cout << "Fibonacci Series: ";
    for(int i=0;i<len;i++)
    { 
        arr[i] = i;      // storing values in an array
        if(i==2 || i >=3)
        { 
            arr[i] = arr[i-2] + arr[i-1]; // storing values in an array
        }
        cout << arr[i] << " ";  // printing output
    }

 return 0;
}