//Any integer is input through the keyboard.Write a program to find out wether it is an even number or idd number.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num % 2 == 0)
    {
        cout<<"Entered number is Even Number";
    }
    else{
        cout<<"Entered number is Odd Number";
    }

    
    return 0;
}