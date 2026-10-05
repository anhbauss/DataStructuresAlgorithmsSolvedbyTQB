#include<stdio.h>
#include<iostream>

using namespace std;
void move(int A[],int B[],int C[],int n,int &i){  
int i_temp = i;
move(A,C,B,n,i++);
B[i_temp]=A[n-1-i_temp];
A[n-1-i_temp]=0;
move(C,B,A,n,i++);
i++;
return;
}
int main(){
    int n;
    cout <<"Vui long nhap gia tri cua n" << endl;
    cin >> n;
    int A[n],B[n],C[n];
    for (int i=0;i<n;i++){
        A[i]=n-i;
    }
}