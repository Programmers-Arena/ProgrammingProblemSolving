// Write a simple program of 2D array
#include<iostream>
using namespace std;
int main(){
    int A[3][4] = {{1,2,3,4},{2,4,1,3},{1,7,5,4}};
    int *B[3];
    int **C;

    

    B[0]= new int [4];
    B[1] = new int [4];
    B[2] = new int [4];

    C = new int *[3];
    C[0]= new int [4];
    C[1] = new int [4];
    C[2] = new int [4];

for(int i =0; i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j];
        cout<<'\n';
        }
    
    }
    return 0;
}
