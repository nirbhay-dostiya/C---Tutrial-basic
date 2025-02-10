#include<iostream>
using namespace std;

int main(){
    int num,remainder,reverse=0;
    cout<<"Enter Your Number :";
    cin>>num;
    int original= num;
    
    while(num !=0){
        remainder = num%10;
        reverse = reverse * 10 + remainder;
       num /= 10;
     }
     cout<<"Reverse of " <<original <<" is " <<reverse;
}