#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Your number : ";
    cin>>n;
    // condition to check prime number
    for(int i=2; i<=n; i++){
        if(n % i == 0){
            cout<<n <<" is not a prime number.";
        }
        else {
            cout<<n <<" is a prime number.";
        }
        break;
    } 
}