//Given the length and breadth of a rectangle, write a program to find whether the ego of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;

int main(){
    int length,breadth;
    cout<<"Enter the length and Breadth of the rectangle: ";
    cin>>length>>breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    if(area > perimeter){
        cout<<"Area of rectangle is greater than perimeter"<<endl;
        cout<<"Area = "<<area<<" Perimeter = "<<perimeter<<endl;
    }
    else{
        cout<<"Area of rectangle is not greater than perimeter"<<endl;
        cout<<"Area = "<<area<<" Perimeter = "<<perimeter<<endl;
    }
    
    return 0;
}