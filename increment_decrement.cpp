#include<iostream>

using namespace std;

int main(){
    int i=5, j;
    j=++i;
    cout<<"X , Y : "<<i<<"\t"<<j<<endl;
    j=i++;
    cout<<" i, j are "<< i << j <<endl;
    cout<<"Post increment of j and value of j is now "<<j<<endl;
    int x=5, y=10,z;
    z= ++x*y;
    cout<<"Using pre increment on x and multiplying, value of z is : "<< z <<endl;
    return 0;
}