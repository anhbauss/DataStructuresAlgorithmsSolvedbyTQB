#include<stdio.h>
#include<iostream>

using namespace std;

void sort(int A[],int n,int a, int b);

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    
    return 0;
}



