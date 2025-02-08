//Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.
#include<iostream>
using namespace std;

int main() {
    int i = 0;
    
    while(i <= 255){
        cout<<"["<<i<<"] = "<<char(i)<<endl;
        i++;
    }
    return 0;
}
