#include<iostream>
#include<string>

using namespace std;
int main()
{
    string arr;  
    for(int i=1;i <=100 ;i++){
        if(i % 3 == 0  && i % 5 == 0){
          arr = arr + "FizzBuzz, ";
        } 
        else if( i % 3 == 0 ){
            arr = arr + "Fizz, ";
        }
         else if( i % 5 == 0){
             arr = arr + "Bizz, ";
         }
        else{
            arr = arr +  to_string(i) +", ";  // to_string() is used to convert int to string
        }
        
    }
    cout << arr;

 return 0;
}
