#include<iostream>

using namespace std;

int main(){
    int a,b,c,s;
    a=8;b=2;
    s=4;
    cout<<"Menu"<<endl<<"1. Addition\n2. Substraction\n3. Multiplication\n4. Divide"<<endl;
    switch (s)
    {
    case 1:
        c = a+b;
        cout<<"Addition is :"<<c<<endl;
        break;
    case 2:
        c = a-b;
        cout<<"Substraction is :"<<c<<endl;
        break;
    case 3: 
        c=a*b;
        cout<<"Multiplication is :"<<c<<endl;
        break;
    case 4:
        c= a/b;
        cout<<"Division is :"<<c<<endl;
        break;
    default:
        cout<<"Invalid argument"<<endl;
        break;
    }
    return 0;
}