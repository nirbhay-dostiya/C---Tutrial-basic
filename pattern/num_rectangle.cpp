#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your row number : ";
    cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            cout<<j <<" ";
        }
        for(int k=1; k<=i-1; k++){
            cout<<k <<" ";
        }
        cout<<endl;
    }
}