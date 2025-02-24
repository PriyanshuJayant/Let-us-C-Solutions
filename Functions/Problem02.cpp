//Write a Function power (a,b) to calculate the value of raised to b.
#include<iostream>
using namespace std;

float pow(float num,float p){
    float ans = 1;
    for (int i = 1; i <= p; i++)
    {
        ans = ans * num; 
    }
    return(ans);
}

int main(){
    float num,p;
    cout<<"Enter a Number: ";
    cin>>num;
    cout<<"Enter Power: ";
    cin>>p;
    
    cout<<pow(num,p);
    
    return 0;
}