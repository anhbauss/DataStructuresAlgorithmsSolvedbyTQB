#include<stdio.h>
#include<iostream>

using namespace std;

int find_duplicate_elements(int A[],int n);

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int duplicate_element = find_duplicate_elements(A,n);
    cout<<"The duplicate element is "<<duplicate_element<<endl;
    return 0;
}

