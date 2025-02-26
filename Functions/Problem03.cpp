#include<iostream>
using namespace std;

void roman(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    
    while (num)
    {
        if (num >= 1000)
        {
            cout<<"M";
            num = num - 1000;
        }
        else if (num >= 500){
            cout<<"D";
            num = num - 500;
        }
        else if(num >= 100){
            cout<<"C";
            num = num - 100;
        }
        else if(num >= 50){
            cout<<"L";
            num = num - 50;
        }
        else if(num >= 10){
            cout<<"X";
            num = num - 10;
        }
        else if(num >= 5){
            cout<<"V";
            num = num - 5;
        }
        else if(num >= 1){
            cout<<"I";
            num = num - 1;
        }
    }
}

int main(){
    roman();

    return 0;
}
