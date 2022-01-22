#include<iostream>

using namespace std;

int main(){
    float u, v, a, speed;
    cout<<"Finding speed, enter u, v, a"<<endl;
    //cin>>u>>v>>a;
    u=10; v= 30; a= 2;
    speed = ((v*v) - (u*u))/(2*a);
    cout<<"The speed is : "<<speed<<endl;
    return 0;
}