#include<iostream>
using namespace std;

int main(){
    int num,reverse = 0, original,remainder;
    cout<<"Enter Your number :";
    cin>>num;
    original = num;

    while(num!=0){
        remainder = num%10;
        reverse = reverse * 10 + remainder;
        num/=10;
    }
    // checking for palindrom
    if(original == reverse){
        cout<<original <<" is a palindrome number.";
    }
    else {
        cout<<original <<" is not a palindrome number.";
    }
}