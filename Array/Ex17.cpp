/*Find majority element (Boyer–Moore Majority Vote Algorithm)
Given an integer array containing duplicates, return the majority element if present. A majority element appears more than n/2 times, where n is the array size.

For example, the majority element is 2 in array {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2}.*/

/*Ý tưởng: Dùng giải thuật sort để sắp xếp mảng theo thứ tự tăng dần: mục đích để gom các phần tử bằng nhau lại.Duyệt để tìm phần tử xuất hiện nhiều nhất*/
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
    int majority=A[0], temp,count_max=0,count=1;
    temp=A[0];
    for(int i=0;i<n;i++){
    if(A[i]!=A[i-1] && i>0){
        if(count>count_max){
            count_max = count;
            majority= temp;
            count=1;
            temp=A[i];
        }
        else{
            count=1;
            temp=A[i];
        }
    }
    else{
        count++;
    }
    }
    if(count>count_max){
        count_max = count;
        majority = A[n-1];
    }
    if(count_max>(int)n/2){
        cout<<"The majority element is " << majority;
    }
    else cout<<"The majority element doesn't exist"<<endl;
    return 0;
}