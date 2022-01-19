#include<iostream> //this is library contains builtin functions, if iostream does not works, write iostream.h
using namespace std;

int main() //starting point of any cpp ,  int is return type, if int return type 0
{
    std::cout<<"Hello World !!"; //c-out is console out, which is monitor similarly c-in is console input that is keyboard
    //<< is insertion operator, like cout is taking <<
    // std::is scope resolution , we replace this by using namespace std;
    //since we are not using everything from std namespace, its better to use std:: scope resolution
    return 0;
}