#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a,b,c,r1,r2;
    cout<<"Enter quadratic equation values to a,b,c : "<<endl;
    //cin>>a,b,c;
    a=6; b=11; c= -35;
    r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots are r1: "<<r1<<" r2 : "<<r2<<endl;
    return 0;
}