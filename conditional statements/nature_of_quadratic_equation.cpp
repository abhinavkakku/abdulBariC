#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a,b,c,d,r1,r2;
    cout<<"Enter quadratic equation values to a,b,c : "<<endl;
    //cin>>a,b,c;
    a=6; b=11; c= -35;
    r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    d= (b*b)-(4*a*c);
    if (d==0){
        cout<<"roots are real and equal :"<<r1<< " "<<r2<<endl;
    }
    else if(d>0){
        cout<<"roots are real and unequal :"<<r1<< " "<<r2<<endl;
    }
    else if(d<0){
        cout<<"roots are imaginary :"<<r1<< " "<<r2<<endl;
    }

    return 0;
}