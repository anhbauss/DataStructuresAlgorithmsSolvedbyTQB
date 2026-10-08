#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    vector<int> input;
    for(int i=0;i<n;i++){
        for(auto j : input){
            j=A[i];
        }
    }
    vector<int> B = sum_prefix(A,n);
}