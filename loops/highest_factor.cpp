#include<iostream>
using namespace std;

int main() {
    int num,factor;
    cout<<"Enter Your number :";
    cin>>num;

    // condition for finding highest factor of any number.
    for(int i=1; i<num; i++){
        if(num % i ==0){
            factor =i;
        }
    }
    cout<<factor <<" is the highest factor of "<<num;
}