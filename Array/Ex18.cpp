/*Move all zeros present in an array to the end
Given an integer array, move all zeros present in it to the end. 
The solution should maintain the relative order of items in the array and should not use constant space.

For example,

Input:  { 6, 0, 8, 2, 3, 0, 4, 0, 1 } 
Output: { 6, 8, 2, 3, 4, 1, 0, 0, 0 }*/

#include<stdio.h>
#include<iostream>

using namespace std;
void swap(int& a, int& b){
    int temp = a;
    a =b;
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
    int count=0;
    for(int i=0;i<n;i++){
    if(A[i]==0){
        count++;
        continue;
    }
    swap(A[i],A[i-count]);
    }
    cout<<"( ";
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<A[i]<<" )"<<endl;
        else cout<<A[i]<<", ";
    }
    return 0;
}