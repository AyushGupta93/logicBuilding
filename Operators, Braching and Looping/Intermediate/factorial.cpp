#include<iostream>
using namespace std;
int main()
{
    int n; //5
    int x=1;
    int factorial;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1;i<n;i++){  
        x=x * (n-i); // 1 x 4 = 4 ; 4 x 3 =12 ; 12 x 2 = 24; 24 x 1= 24;
    }
    if(n==0){
        factorial = 1;
        cout << "Factorial of " << n << " is " << factorial;
    }
    else{
        factorial = n * x;  // 5 x 24 = 120;
        cout << "Factorial of " << n << " is " << factorial;
    }
    
 return 0;
}