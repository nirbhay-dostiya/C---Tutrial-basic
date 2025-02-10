#include<iostream>
using namespace std;

int main(){
    int a,b;
    char operent;
    cout<<"Enter Your first number : ";
    cin>>a;
    cout<<"Enter Your second number : ";
    cin>>b;
    cout<<"Enter Your opereter : ";
    cin>>operent;

    switch(operent){
        case '+' :
            cout<<a+b;
            break;
        case '-' :
            cout<<a-b;
            break;
        case '*' :
            cout<<a*b;
            break;
        case '/' :
            cout<<a/b;
            break;
        default :
            cout<<"Invalid operation.";
    }


}