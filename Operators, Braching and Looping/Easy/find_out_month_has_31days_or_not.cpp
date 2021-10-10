#include<iostream>
#include<string>

using namespace std;
int main(){
    string month;
    cout<<"Enter a month: ";
    getline(cin,month); //it is used to take user input in string

    for(int i=0; i < month.length();i++){  // it converts string into uppercase
       month[i] = toupper(month[i]);
    }

    //processing
    if(month== "JANUARY" || month == "MARCH" || month == "MAY" || month == "JULY" || month == "AUGUST" || month == "OCTOBER" || month == "DECEMBER") 
    { // branching
        cout<<month <<" has 31 days";  //output
    }
    else
    cout << month << " has not 31 days"; //output
    
    return 0;
}