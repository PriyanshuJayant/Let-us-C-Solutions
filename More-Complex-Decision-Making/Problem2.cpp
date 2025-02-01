#include<iostream>
#include<cmath>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;

    if ((ch >= 65) && ( ch <= 90))
    {
        cout<<ch<<" is an uppercase letter."<<endl;
    }
    else if ((ch >= 97) && ( ch <= 122)){
        cout<<ch<<" is a lowercase letter."<<endl;
    }
    else if ((ch >= 48) && ( ch <= 57)){
        cout<<ch<<" is a digit."<<endl;
    }
    else if ((ch >= 0) && (ch <= 47) || (ch >= 58) && (ch <=64) || (ch >=91)&& (ch <=96) || (ch >=123) && (ch <=127))
    {
        cout<<ch<<" is a special character."<<endl;
    }
    
    
    return 0;
}