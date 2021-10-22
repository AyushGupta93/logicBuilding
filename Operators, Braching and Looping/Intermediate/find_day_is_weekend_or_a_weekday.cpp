#include<iostream>
#include<string>
using namespace std;
int main()
{
    string day;
    cout << "Enter the day: ";
    getline(cin,day);
    for(int i=0;i<day.length();i++){
        day[i] = toupper(day[i]);
    }
    if(day=="SATURDAY" || day== "SUNDAY"){
        cout << day << " is a weekend";
    }
    else{
         cout << day << " is a weekday";
    }
    
 return 0;
}