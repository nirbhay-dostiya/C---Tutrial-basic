#include<iostream>
using namespace std;
int main() {
    int row;
    cout<<"Enter your row number :";
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            if(i==1 or j==1 or i==row or j==row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}