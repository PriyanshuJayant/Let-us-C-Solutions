//If ages of Ram Shyam, Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include<iostream>
using namespace std;

int main(){
    int ram,shyam,ajay;
    cout<<"Enter Age of Ram Shyam and ajay: ";
    cin>>ram>>shyam>>ajay;

    if ((ram <= shyam) && (ram <= ajay))
    {
        cout<<"Ram is youngest.";
    }
    else if ((shyam <= ajay) && (shyam <= ram))
    {
        cout<<"Shyam is youngest";
    }
    else{
        cout<<"Ajay is youngest";
    }
    return 0;
}