/*Replace every array element with the product of every other element without using a division operator
Given an integer array, replace each element with the product of every other element without using the division operator.

For example,

Input:  { 1, 2, 3, 4, 5 }
Output: { 120, 60, 40, 30, 24 }  
Input:  { 5, 3, 4, 2, 6, 8 }
Output: { 1152, 1920, 1440, 2880, 960, 720 }*/

#include<stdio.h>
#include<iostream>

using namespace std;


int main(){
    int n;
    cout<<"Vui long nhap so phan tu trong mang: "<<endl;
    cin>>n;
    int A[n];
    cout<<"Vui long nhap gia tri vao mang: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int product=1;
    int B[n],C[n];
    for(int i=0;i<n;i++){
        product*=A[i];
        B[i]=product;
    }
    product=1;
    for(int i=n-1;i>=0;i--){
        product*=A[i];
        C[i]=product;
    }
    for (int i=0;i<n;i++){
        if(i==0) A[i]=C[i+1];
        else if(i==n-1) A[i]=B[i-1];
        else A[i]=B[i-1]*C[i+1];
    }

    cout<<"( ";
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<A[i]<<" )"<<endl;
        else cout<<A[i]<<", ";
    }
    return 0;
}
