#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int side1,side2,side3,max,sum;
    cout<<"Enter the Three sides of a triangle: ";
    cin>>side1>>side2>>side3;

    if ((side1 > side2) && (side1 > side3)){
        max = side1;
    }
    else if ((side2 > side1) && (side2 > side3)){
        max = side2;
    }
    else if ((side3 > side1) && (side3 > side2)){
        max = side3;
    }   
    cout<<max;

    if (max == side1)
    {
        sum = side2 + side3;
        if (sum > max)
        {
            cout<<"This is a valid triangle"<<endl;
        }
        else{
            cout<<"This is not a valid triangle"<<endl;
        }
    }
    else if (max == side2){
        sum = side1 + side3;
        if (sum > max){
            cout<<"This is a valid triangle"<<endl;
        }
        else{
            cout<<"This is not a valid triangle"<<endl;
        }
    }
    else if (max == side3) {
        sum = side1 + side2;
        if (sum > max){
            cout<<"This is a valid triangle"<<endl;
        }
        else{
            cout<<"This is not a valid triangle"<<endl;
        }
    }
    
    
    
    
    return 0;
}