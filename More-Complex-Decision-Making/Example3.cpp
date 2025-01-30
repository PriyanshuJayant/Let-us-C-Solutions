#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int yos,salary=0;
    char gender, qualification;
    cout<<"Enter Your Gender (M/F): ";// M
    cin>>gender;
    cout<<"Enter Your Years of Service: ";// 15
    cin>>yos;
    cout<<"Enter Qualification as Graduate or Post Graduate(p/g): ";// PG
    cin>>qualification;

    if ((gender == 'M') && (qualification == 'p') && (yos >= 10)){
        salary = 11000;
    }
    else if ((gender == 'M') && (qualification == 'g') && (yos >= 10)){
        salary = 10000;
    }
    else if ((gender == 'M') && (qualification == 'p') && (yos < 10)){
        salary = 10000;
    }
    else if ((gender == 'M') && (qualification == 'g') && (yos < 10)){
        salary = 7000;
    }
    else if ((gender == 'F') && (qualification == 'p') && (yos >= 10)){
        salary = 12000;
    }
    else if ((gender == 'F') && (qualification == 'g') && (yos >= 10)){
        salary = 9000;
    }
    else if ((gender == 'F') && (qualification == 'p') && (yos < 10)){
        salary = 10000;
    }
    else if ((gender == 'F') && (qualification == 'g') && (yos < 10)){
        salary = 6000;
    }
    cout<<"Salary: "<<salary;
    return 0;
}