//While purchasing certain item, a discount of 10% is offered if the quantity purchased is more than 1000. if quantity and price per item are input through the keyboard, write a program to calculate the total expenses

#include<iostream>
using namespace std;

int main(){
    int quantity, discount;
    float rate, total,total2;
    cout<<"Enter quantity: ";//2
    cin>>quantity;
    cout<<"Enter rate: ";//600
    cin>>rate;

    total = quantity * rate;// total = 1200
    if (total > 1000)
    {
        discount = 10;
    }
    else{
        discount = 0;
    }
    total2 = total - (total * discount / 100);
    if (total2 > 1000)
    {
        cout<<"Total expenses: "<<total2<<endl;
        cout<<"Discount applied: "<<discount<<"%"<<endl;
        cout<<"10 % of "<< total2<<" is "<< total * discount/100<<endl;
    }
    else{
        cout<<"Total Expenses: "<<total2<<endl;
        cout<<"Discount was not applicable as total expense is less then 1000"<<endl;
    }
    
    return 0;
    
    
    return 0;
}