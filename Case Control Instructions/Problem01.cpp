#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"\n--------------------------------------------------------\n";
    cout<<"\n1. Factorial of a Number\n";
    cout<<"2. Prime or not\n";
    cout<<"3. Odd or even\n";
    cout<<"4. Exit\n";
    cout<<"\n--------------------------------------------------------\n";
    cout<<"Enter your Operation: ";
    cin>>choice;
    int num;
    switch(choice){
        case 1:{
            cout<<"Enter a Number: ";
            cin>>num;
            long long int factorial = 1;
            for(int i = num ; i >= 1; --i){
                factorial = factorial * i;
            }
            cout<<"Factorial: "<<factorial<<endl;
            break;
        }
        case 2:
            cout<<"Enter a Number: ";
            cin>>num;
            int count = 0;
            for (int i = 1; i <= num; i++)
            {
                if(num % i == 0){
                    count++;
                }
            }
            if(count == 2){
                cout<<"Entered Number is Prime"<<endl;
            }
            else{
                cout<<"Entered Number is not Prime"<<endl;
            }
            
            break;
    }


    return 0;
}