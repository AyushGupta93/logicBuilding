#include<iostream>
using namespace std;
int main(){
    int num1=35,num2=29,num3=46;
    if(num1 < num2 && num1 < num3 ){
        cout<< num1 <<" is minimum";
    }
    if( num2 < num1 && num2 < num1){
        cout << num2 <<" is minimum";
    }
    else
    cout << num3 << " is minimum";
    return 0;
}