//Write a Function to Calculate the factorial value of any Integer Entered through the Keyboard
#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return(fact);
}

int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<fact(num);
    
    return 0;
}