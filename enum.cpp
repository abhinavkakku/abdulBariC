#include<iostream>

using namespace std;

enum day {monday=1, tuesday, wednesday, thursday, friday, saturday, sunday};
enum dpt { cs=1, ece, it};

int main(){
    day d;
    d=monday;
    if( d==monday){
        cout<<"monday aaya"<<endl;
    }
    
    return 0;
}