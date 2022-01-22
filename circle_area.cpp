#include<iostream>

using namespace std;

int main(){
    float radius, area;
    cout<<"Enter radius of circle :"<<endl;
    //cin>>radius;
    radius = 7;
    area = float(22/7)*radius*radius;
    cout<<"Area of circle is: "<<area<<endl;
    return 0;
}