/*Example 1: The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rules:

Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){int sub1,sub2,sub3,sub4,sub5,percent;
    cout<<"Enter the Marks of 1st Subject: ";
    cin>>sub1;
    cout<<"Enter the Marks of 2nd Subject: ";
    cin>>sub2;
    cout<<"Enter the Marks of 3rd Subject: ";
    cin>>sub3;
    cout<<"Enter the Marks of 4th Subject: ";
    cin>>sub4;
    cout<<"Enter the Marks of 5th Subject: ";
    cin>>sub5;

    int total= sub1 + sub2 + sub3 + sub4 + sub5;
    cout<<"Passing Marks: 200/500"<<endl;
    cout<<"Total Marks: "<<total<<"/500"<<endl;
    percent = total * 100/500;
    
    // if marks entered by user is more than 100 then program will end
    if ((sub1 > 100) || (sub2 > 100) || (sub3 > 100) || (sub4 > 100) || (sub5 > 100))
    {
        cout<<"Invalid Marks entered. Please enter marks between 0 and 100."<<endl;
        return 1;
    }
        if (percent >= 60)
        {
            cout<<"First Division";
        }
        else 
        {
        if ((percent >= 50) && (percent <= 59))// && = Both conditions need to be true
            {
            cout<<"Second Division";
            }
        else if ((percent >= 40) && (percent <= 49))
        {
            cout<<"Third Division";
        }
        else if (percent < 40)
        {
            cout<<"Fail";
        }
    }
    return 0;
}