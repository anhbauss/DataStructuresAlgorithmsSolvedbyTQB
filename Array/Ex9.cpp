#include<stdio.h>
#include<iostream>
using namespace std;
void sort(int A[],int n);
void swap(int* p1, int* p2);
void sap_xep(int* p);
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
    cout<<"X[] = {";
    for(int i=0;i<n;i++){
        if(i<n-1)
        cout<<" "<<A[i]<<",";
        else cout<<" "<<A[i]<<" }"<<endl;
    }
    cout<<"Y[] = {";
    for(int i=0;i<m;i++){
        if(i<m-1)
        cout<<" "<<B[i]<<",";
        else cout<<" "<<B[i]<<" }"<<endl;
    }
    
    return 0;
// A[n]={1,3,4,6,7,8} 
//      B[n]={4,5,7,8,9,10}
}
void sort(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j]= A[j+1];
                A[j+1] = temp;
            }
        }
    }
    return;
}
void swap(int*p1, int*p2){
    int temp = *p1;
    *p1 =*p2;
    *p2 = temp;
    return;
}
void sap_xep(int*p){
    int* t1 = p;
    while(*t1>*p){
        t1++;
    }
    int temp = *t1;
    *t1 = *p;
    *p = temp;
    return;
}

