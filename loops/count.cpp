#include<iostream>
using namespace std;

int main(){
    int num, count=0;
    cout<<"Enter your number :";
    cin>>num;
    int original = num;

    while(num !=0){
        num /= 10;
        count++;
    }
    cout<<"Digits in "<<original <<" is "<<count;
}