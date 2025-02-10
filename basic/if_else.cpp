#include<iostream>
using namespace std;
int main() {
    int marks; 
    cout<<"Enter your total marks in 5 subject :";
    cin>>marks;

    // condition check 
    if(marks<200){
        cout<<"Fail";
    }
    else if(marks> 200 &&  marks <= 500){
        cout<< "Pass\n";
        cout<< "Your marks is :" <<marks;
    }
    else {
        cout<<"You have inter wrong marks";
    }
    return 0;
}