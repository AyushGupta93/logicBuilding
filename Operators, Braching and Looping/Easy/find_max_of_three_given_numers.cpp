#include<iostream>
using namespace std;
int main(){
    int num1=8,num2=23,num3=17;

    
    if(num1 > num2 && num1 > num3){
        cout << num1 << " is maximum";
    }
    if( num2 > num1 && num2 > num3){
        cout << num2<< " is maximum";
    }
    else{
        cout<< num3 << " is maximum";
    }
    return 0;
}