//if cost price and selling price of an item is input through the keyboard, write a program to determine wether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include<iostream>
using namespace std;

int main(){
    int cp,sp;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"Enter the Selling Price: ";
    cin>>sp;
    
    if (cp>sp){
        cout<<"Loss incurred: "<<(cp-sp);
    }
    else{
        cout<<"Profit made: "<<sp-cp;
    }
    return 0;
}