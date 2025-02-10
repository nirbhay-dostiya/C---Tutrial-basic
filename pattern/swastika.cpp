#include<iostream>
using namespace std; 
int main(){
    int r;
    cout<<"Enter Your row number : ";
    cin>>r;

    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            if((i==0 and j>=r/2) 
            or (i==r/2) 
            or (i==r-1 and j<=r/2) 
            or(j==0 and i>=r/2) 
            or
(j==r-1 and i<=r/2)){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}