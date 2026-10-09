#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua m,n:"<<endl;
    cin>>n;
    cin>>m;
    int A[n];
    int B[m];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    int *p1,*p2;
    p1=A;
    p2=B;
    while(*p1!=A+n && *p2!=B+m){
    if(p1==0) p1++;
    }
}