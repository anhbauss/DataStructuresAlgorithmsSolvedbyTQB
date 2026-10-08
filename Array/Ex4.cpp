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


