#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Your number :";
    cin>>num;

    // check number is divisible by 3 or 5 but not divisible by 15
    if(num%3 ==0 or num%5==0 and num%15 != 0){
        cout<<num <<" is divisible by 3 or 5 but not divisible by 15.";
    }
    else{
        cout<<num <<"is not divisible by 3 or 5 ";
    }
}