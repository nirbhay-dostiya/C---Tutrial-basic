#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num,digits =0,original,remainder=0;
    int result = 0;
    cout<<"Enter your number :";
    cin>>num;
    original = num;

    while(original !=0){     // counting the digits
        original/=10;
        digits ++;
    }
    cout<<digits<<endl;
    original = num;
    while(original !=0){
        remainder = original % 10;
        result += pow(remainder,digits);
        cout<<result <<"\t";
        original /=10;   
    }
    cout<<endl;
    cout<<result <<"\n";
    if(num==result){
        cout<<num <<" is a Armstrong number.";
    }
    else {
        cout<<num <<" is not a Armstrong number.";
    }
}
