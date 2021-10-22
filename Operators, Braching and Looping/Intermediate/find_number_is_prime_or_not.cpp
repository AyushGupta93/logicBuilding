#include<iostream>
using namespace std;
int main()
{
    int number; //15
    int factor=0;
    cout<<"Enter the number: ";
    cin>> number;
    for(int i=1;i<=number;i++){
        if(number%i==0) // 15 / 1 = 0;
        {
        factor++;
        }
    }
    if(factor==2){
        cout << number <<" is a prime number";
    }
    else{
        cout << number <<" is not a prime number";
    }
 return 0;
}