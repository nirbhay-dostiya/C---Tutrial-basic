#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter your number :";
    cin>>num;

    // using ternery operator to find even or odd number
    (num % 2 ==0) ? cout<<"Even" : cout<<"Odd";

}