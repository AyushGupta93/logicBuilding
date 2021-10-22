#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<< "Enter the number: ";
    cin >> number;
    for(int i=1; i<=12; i++){
       int table = number * i;
       cout << number << " x " << i << " = " << table <<endl;  // 2 x 1 = 2
    } 
 return 0;
}