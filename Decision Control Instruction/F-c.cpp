//Write a program to check whether a triangle is valid or not. If three angles of the triangle are entered through the keyboard or triangle, is valid if the sum of all three angles is equal to 180 degree.

#include<iostream>
using namespace std;

int main(){
    int angle_1,angle_2,angle_3;
    cout<<"Enter the angle of three sides of the triangle: ";
    cin>>angle_1>>angle_2>>angle_3;
    
    //Check if the triangle is valid
    if (angle_1 + angle_2 + angle_3 <= 180)
    {
        cout<<"The triangle is valid.";
    }
    else{
        cout<<"The triangle is not valid.";
    }
    return 0;
}