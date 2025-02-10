#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter first side of a triangle : ";
    cin>>a;
    cout<<"Enter second side of a triangle : ";
    cin>>b;
    cout<<"Enter third side of a triangle : ";
    cin>>c;
    
    // checking of condition for a valid triangle
    if(a+b>c && b+c>a && c+a>b){
        cout<<"This is a valid triangle.";
    }
    else {
        cout<<"Given side not form a valid triangle.";
    }
}