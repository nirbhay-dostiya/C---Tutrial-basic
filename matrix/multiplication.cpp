#include<iostream>
using namespace std; 
int main(){
    int r1,r2,c1,c2;
    cout<<"Enter row and column of 1st matrix : ";
    cin>>r1>>c1;
    cout<<"Enter row and column of 2nd matrix : ";
    cin>>r2>>c2;

    int a[r1][c1], b[r2][c2] , res[r1][c2];

    // input first matrix
    cout<<"Enter the element of 1st matrix : ";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>a[i][j];
        }
    }
    // input second matrix
    cout<<"Enter the element of 2nd matrix : ";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>b[i][j];
        }
    }
    // printing 1st matrix
    cout<<"First matrix is : \n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
    }
    //  printing 2nd matrix
    cout<<"Second matrix is : \n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<b[i][j] <<" ";
        }
        cout<<endl;
    }
    // initilizing the res matrix to 0
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            res[i][j] =0;
        }
    }
    if(c2 !=r1){
        cout<<"Multiplication of given matrix is not possible. \n";
    }
    else {
        // logic for multiplication of given matrix
        for(int i=0; i<r1; i++){
            for(int j=0; j<c2; j++){
                for(int k=0; k<c1; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // printing multipication
    cout<<"Multiplication of given matrix is : \n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<res[i][j] <<" ";
        }
        cout<<endl;
    }
    }
}