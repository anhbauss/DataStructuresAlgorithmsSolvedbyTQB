/*Rearrange an array with alternate high and low elements
Given an integer array, rearrange it such that every second element becomes greater than its left and right elements. 
Assume no duplicate elements are present in the array.*/
//3  6  7  9  14  17  19  31
//3  7  6  9  17  14  19  31
//9, 6, 8, 3, 7
//3  7  6  9  8  
//Ý tưởng: Dùng giải thuật buble sort để sort mảng theo thứ tự tăng dần. Sau khi sort thì đảo chỗ phần tử lẻ với phần từ ngay sau nó

#include<stdio.h>
#include<iostream>

using namespace std;

void bubble_sort(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j]= A[j+1];
                A[j+1] = temp;
            }
        }
    }
    return;
}
void swap(int& a, int& b){
    int temp = a;
    a= b;
    b = temp;
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
    bubble_sort(A,n);
    for(int i=0;i<n;i+=2){
    swap(A[i],A[i+1]);
    }
        cout<<"( ";
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<A[i]<<" )"<<endl;
        else cout<<A[i]<<", ";
    }
    return 0;
}