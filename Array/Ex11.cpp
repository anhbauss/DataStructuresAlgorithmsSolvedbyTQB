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
    //Day cac phan tu khac khong trong A ve cuoi
    int *p1,*p2;
    p2=A+n;
    p1=p2;
    while(p2!=0){
        p2--;
        while(p1!=0) {
            *p2=*p1;
            p1--;
        }
    }
}