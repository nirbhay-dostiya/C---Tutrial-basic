#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Your row :";
    cin>>num;

    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}