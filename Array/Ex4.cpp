#include<stdio.h>
#include<iostream>

using namespace std;

void sort(int A[],int n);

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    sort(A,n);
    for(int i=0; i<n;i++){
        cout<<A[i];
        if(i< n-1)
        cout<<" ";
        else continue;
    }
    return 0;
}

void sort(int A[],int n){
    int* p1;
    int* p2;
    p1=&A[0];
    p2=p1+n;
    while(p1!=p2){
    if(*p1==1){
        while(p2!=p1){
        if(*p2==0){
            int temp= *p2;
            *p2=*p1;
            *p1 = temp;
        }
        p2--;
        }
    }
    p1++;
    }
}


