#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter your row number :";
    cin>>row;

    for(int i=row; i>=1; i--){
        for(int j=1; j<=row-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=(2*i-1); k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}