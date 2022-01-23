#include<iostream>
using namespace std;
int main(){
    float bill=0,discount=0.0,discounted_bill=0; 
    bill = 99;
    if ( bill < 100){
        discount = 0;
    }
    else if ( bill>=100 && bill < 500){
        discount = bill*10/100;
    }
    else if ( bill>=500){
        discount = bill*20/100;
    }
    cout<<"Bill is :"<<bill<<endl<<"discount is : "<<discount<<"\n Final Bill is : "<<bill-discount<<endl;
    return 0;
}
int bill,discount,dicounted_bill;