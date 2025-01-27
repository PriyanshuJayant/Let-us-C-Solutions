#include<iostream>
using namespace std;

int main(){
    int Hardness,Tensile_Strength,grade;
    float Carbon_Content;
    cout<<"Enter the Hardness of Steel (0/100): "<<endl;
    cin>>Hardness;
    cout<<"Enter the Carbon Content of Steel (0/1): "<<endl;
    cin>>Carbon_Content;
    cout<<"Enter the Tensile Strength of Steel (0/10000): "<<endl;
    cin>>Tensile_Strength;
    int count = 0;
    
    if(((Hardness < 100) && (Hardness > 0)) && ((Carbon_Content < 1) && (Carbon_Content > 0)) && ((Tensile_Strength < 10000) && (Tensile_Strength > 0))){
        cout<<"Valid Inputs"<<endl;
    }
    else{
        cout<<"Please enter Valid Range";
        return 1;
    }

    if((Hardness > 50) && (Carbon_Content < 0.7) && (Tensile_Strength > 5600)){
        grade = 10;
    }
    else if((Hardness > 50) && (Carbon_Content < 0.7)){
        grade = 9;
    }
    else if((Hardness < 50) && (Carbon_Content < 0.7) && ((Tensile_Strength > 5600))){
        grade = 8;
    }
    else if((Hardness > 50) && (Carbon_Content > 0.7) && (Tensile_Strength > 5600)){
        grade = 7;
    }
    else if((Hardness < 50) && (Carbon_Content > 0.7) && (Tensile_Strength < 5600)){
        grade = 5;
    }
    else{
        if (Hardness > 50)
        {
            count++;
        }
        if(Carbon_Content < 0.7){
            count++;
        }
        if(Tensile_Strength > 5600){
            count++;
        }

        if(count == 1){
            grade = 6;
        }
        
    }
    
    cout<<"Grades is: "<<grade;
    return 0;
}