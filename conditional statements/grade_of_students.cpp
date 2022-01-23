#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    float avg;
    cout<<"Enter the marks of students of 3 subjects"<<endl;
    a=40;b=9;c=40;
    avg = (a+b+c)/3;
    if (avg>=60){
        cout<<"grade is A"<<endl;
    }
    else if ( avg>= 35 && avg < 60){
        cout<<"grade is B"<<endl;
    }
    else if ( avg < 35){
        cout<<"grade is C"<<endl;
    }
}