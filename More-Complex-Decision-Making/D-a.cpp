#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Length of 1st Side of Triangle: ";
    cin>>a;
    cout<<"Enter Length of 2nd Side of Triangle: ";
    cin>>b;
    cout<<"Enter Length of 3rd Side of Triangle: ";
    cin>>c;
    
    if ( ((a + b) > c) && ((a + c)>b) && ((b + c)>a) )
    {
        cout<<"This is a Valid Triangle"<<endl;
    }
    else{
        cout<<"This is a Invalid Triangle";
        return 1;
    }
        if ((a == b) || (b==c) || (c==a))// any one have to be true
        {
            cout<<"This is a Isosceles Triangle"<<endl;
        }
        if (a == b && b == c)
        {
            cout<<"This is a Equilateral Triangle";
        }

        if (a != b && b != c && c != a)
        {
            cout<<"This is a Scalene Triangle"<<endl;
        }
        if ((a * a + b * b == c * c) ||
        (c * c + b * b == a * a) || 
        (a * a + c * c == b * b)) 
        {
            cout<<"This is a Right Angle Triangle";
        }
    return 0;
}