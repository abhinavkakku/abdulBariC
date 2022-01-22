#include<iostream>

using namespace std;

int main(){
    float basic, allowance_per, deduction_per, sal;
    cout<<"Enter basic salary, allowance percentage, and deduction percentage"<<endl;
    //cin>> basic;
    basic = 10000;
    allowance_per = 30;
    deduction_per = 3;
    sal = basic + ((allowance_per/100)*basic) -((deduction_per/100)*basic);
    cout<<"The net salary one gets is "<<sal<<endl;
    return 0;
}