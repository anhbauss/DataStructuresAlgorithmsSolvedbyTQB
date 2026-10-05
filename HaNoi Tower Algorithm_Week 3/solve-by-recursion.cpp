#include<stdio.h>
#include<iostream>

using namespace std;
void move(int n,int A[],int &num_A,int B[],int &num_B,int C[],int &num_C){  
if(n==0) return;
move(n-1,A,num_A,C,num_C,B,num_B);
int temp = A[num_A];
A[num_A] =0;
num_A--;
num_B++;
B[num_B] = temp;
move(n-1,C,num_C,B,num_B,A,num_A);
for(int i=0;i<n;i++) {
    if(i==0) cout<<"A:";
    cout<<A[i];
    if(i==n-1) cout<<endl;
}
for(int i=0;i<n;i++) {
    if(i==0) cout<<"B:";
    cout<<B[i];
    if(i==n-1) cout<<endl;
}
for(int i=0;i<n;i++) {
    if(i==0) cout<<"C:";
    cout<<C[i];
    if(i==n-1) cout<<endl;
}
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