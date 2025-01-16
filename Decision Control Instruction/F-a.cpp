//A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.
#include<iostream>
using namespace std;

int main(){
    int num,r;
    cout<<"Enter a Five Digit Number: "<<endl;
    cin>>num;
    cout<<"Number Entered: "<<num<<endl;

    originalnumber = num;
    while(num > 0){     //234 > 0 True
        r = num % 10;   //234 % 10 = 4
        cout<<remainder;
        num = num/10;   //234 / 10 = 23
    }
    return 0;
}