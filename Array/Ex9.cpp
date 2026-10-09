#include<stdio.h>
#include<iostream>
using namespace std;
void sort(int A[],int n);
void swap(const int* p1, int* p2);
void sap_xep(const int* p);
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
    int*p1,*p2;
    p1 = A;
    p2= B;
    while(p1!=A+n){
        while(p2!=B+m){
            if(*p2<*p1){
                swap(p1,p2);
                sap_xep(p2);
            }
            p2++;
        }
        p1++;
    }
    for(int i=0;i<n;i++){
        if(i<n-1)
        cout<<" "<<A[i]<<",";
        else cout<<" "<<A[i]<<" }"<<endl;
    }
    
    return 0;
// A[n]={1,3,4,6,7,8} 
//    B[n]={4,5,7,8,9,10}
}

