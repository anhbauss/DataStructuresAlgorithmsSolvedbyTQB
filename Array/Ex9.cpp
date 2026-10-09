#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Vui long nhap gia tri cua n,m:"<<endl;
    cin>>n>>m;
    int A[n],B[m];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    sort(A,n);
    sort(B,m);
    int* p1,p2;
    while(p1!=NULL){
        while(p2!=NULL){
            if(*p2<*p1){
                swap(p1,p2);
                sap_xep(p2);
            }
            p2++;
        }
        p1++;
    }

// A[n]={1,3,4,6,7,8} 
//    B[n]={4,5,7,8,9,10}
}