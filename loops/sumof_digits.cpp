#include<iostream>
using namespace std;
int main() {
    int num,sum=0 ,remainder,original;
    cout<<"Enter your number :";
    cin>>num;
    original = num;

    // calculating sum of given digits.
    while(num !=0){
        remainder = num % 10;
        sum +=remainder;
        num/=10;
    }
    cout<<"Sum of digits of "<<original <<" is "<<sum;

}