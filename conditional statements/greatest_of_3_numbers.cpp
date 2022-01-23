#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    a=3;b=14;c=5;
    if ( a>b && a>c){
        cout<<"a is greatest"<<endl;
    }
    if (b>a && b>c){
        cout<<"B is the greatest"<<endl;
    }
    else{
        cout<<"C is champ"<<endl;
    }
    return 0;
}