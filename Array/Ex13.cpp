/*Find the maximum product of two integers in an array
Given an integer array, find the maximum product of two integers in it.

For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.*/
/*Ý tưởng:Viết hàm tìm hai số dương trong mảng, sau đó đảo dấu của mảng để tìm hai số âm nhất trong mảng*/
#include<stdio.h>
#include<iostream>

using namespace std;

pair<int,int> find_max_in_arr(int A[],int n);
int main(){
    int n;
    cout<<"Vui long nhap so phan tu trong mang: "<<endl;
    cin>>n;
    int A[n];
    cout<<"Vui long nhap gia tri vao mang: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    pair<int,int> max,min;int
    max = find_max_in_arr(A,n);
}

