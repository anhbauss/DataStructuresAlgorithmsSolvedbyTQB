/*
Find the index of 0 to be replaced to get the maximum length sequence of continuous ones
Given a binary array, find the index of 0 to be replaced with 1 to get the maximum length sequence of continuous ones.

For example, consider the array { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 }. 
We need to replace index 7 to get the continuous sequence of length 6 containing all 1’s.
*/

//Giải thuật: Tìm kiếm từng mảng con trong mảng lớn sao cho mảng đấy toàn số 1 hoặc chỉ có một sô 0

#include<stdio.h>
#include<iostream>
#include<vector>
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
    vector<int> index;
    
}