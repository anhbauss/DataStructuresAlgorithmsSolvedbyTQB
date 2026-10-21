/*Longest Bitonic Subarray Problem
The Longest Bitonic Subarray (LBS) problem is to find a subarray of a given sequence in which 
the subarray’s elements are first sorted in increasing order, then in decreasing order, and 
the subarray is as long as possible. Strictly ascending or descending subarrays are also accepted.

For example,

Longest bitonic subarray of the sequence { 3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4 } is { 4, 5, 9, 10, 8, 5, 3 } 
For sequences sorted in increasing or decreasing order, the output is the same as the input sequence, 
i.e., [1, 2, 3, 4, 5] ——> [1, 2, 3, 4, 5][5, 4, 3, 2, 1] ——> [5, 4, 3, 2, 1]*/

/*Ý tưởng: Duyệt với mỗi phần tử, tạo hàm tìm mảng bitonic với mỗi phần tử và hàm tìm kích thước mảng bitonic đó*/

#include<stdio.h>
#include<iostream>
#include<vector>
#include"ALGORITHM.h"

using namespace std;
int find_bitonic_arr_size(int A[],int i, int n){
    int num=0;
    int max=A[i];
    bool qua_dinh = false;
    for(int j=i;j<n;j++){
    if(j==i){
        num++;
        continue;
    }
    if(A[j]>=A[j-1] && qua_dinh == false){
        max=A[j];
        num++;
    }
    else if(A[j]>=A[j-1] && qua_dinh == true) break;
    else if(A[j]<A[j-1]){
    qua_dinh==true; 
    num++;
    }
    }
    return num;
}
void find_bitonic_arr(vector<int>& data,int A[],int i,int n){
    data.clear();
    int max=0;
    bool qua_dinh = false;
    for(int j=i;j<n;j++){
    if(j==i){
        data.push_back(A[j]);
        continue;
    }
    if(A[j]>=A[j-1] && qua_dinh == false){
        max=A[j];
        data.push_back(A[j]);
    }
    else if(A[j]>=A[j-1] && qua_dinh == true) break;
    else if(A[j]<A[j-1]){
    qua_dinh==true; 
    data.push_back(A[j]);
    }
    }
    return;
}


int main(){
    int n;
    cout<<"Vui long nhap so phan tu trong mang: "<<endl;
    cin>>n;
    int A[n];
    cout<<"Vui long nhap gia tri vao mang: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int max_size=0;
    vector<int> data;
    for(int i=0;i<n;i++){
       int bitonic_size = find_bitonic_arr_size(A,i,n);
       if(bitonic_size>max_size){
        max_size = bitonic_size;
       find_bitonic_arr(data,A,i,n);
       }
    }

    cout<<"( ";
    for(int a : data){
        cout<<" "<<a<<",";
    }
    cout<<" }"<<endl;
    return 0;
}
