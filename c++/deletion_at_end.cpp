#include<iostream>
using namespace std;
int idx;

int DeleteAtEnd(int m[]){
    cout<<"enter index"<<endl;
    cin>>idx;
    m[idx] = 0;

}
int main (){
    int A[4] = {2,1,3,4};
    int x = DeleteAtEnd(A);
    cout<<x<<endl;
    return 0;
}
