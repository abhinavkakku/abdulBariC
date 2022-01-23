#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers a & b to divide"<<endl;
    a=22;b=0;
    if(b==0){
        cout<<"Division by 0 not possible"<<endl;
    }
    else{
        cout<<"Result is : "<< a/b <<endl;
    }
    return 0;
}