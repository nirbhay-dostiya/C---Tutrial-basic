#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Your number :";
    cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            cout<<(char)(64+j)<<" ";
        }
        cout<<endl;
    }
}