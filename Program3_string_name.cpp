#include<iostream>
using namespace std;

int main(){
    string name, fullname; //string type declaration
    cout<<"What is your name ? "<<endl;
    cin>>name;
    cout<<"Welcome Mr./Mrs. "<<name<<endl;
    cout<<"Enter Full name "<<endl;
    getline(cin, fullname); //to get full name with spaces
    cout<<"Hello Again "<<fullname<<endl;
    return 0;
}