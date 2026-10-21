/*Find the maximum product of two integers in an array
Given an integer array, find the maximum product of two integers in it.

For example, consider array {-10, -3, 5, 6, -2}. The maximum product is the (-10, -3) or (5, 6) pair.*/
/*Ý tưởng:Viết hàm tìm hai số dương nhất trong mảng, sau đó đảo dấu của mảng để tìm hai số âm nhất trong mảng*/
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
    pair<int,int> max,min;
    max.first =0;
    max.second =0;
    min.first =0;
    max.second =0;
    max = find_max_in_arr(A,n);
    for(int i=0;i<n;i++){
        A[i]=-A[i];
    }
    min = find_max_in_arr(A,n);
    if(max.first*max.second<min.first*min.second){
        max.first = min.first;
        max.second = min.second;
        min.first = 0;
        min.second =0;
    }
    else if(max.first*max.second>min.first*min.second){
        min.first = 0;
        min.second =0;
    }
    cout<<"The maximum product is the "<<"("<<max.first<<", "<<max.second<<") ";
    if(min.first != 0 && min.second !=0) 
    cout<<" or"<<"("<<-min.first<<", "<<-min.second<<") ";
    cout<<"pair."<<endl;
    return 0;
}

pair<int,int> find_max_in_arr(int A[],int n){
    int max_1,max_2;
    pair<int,int> max;
    max_1= 0;
    max_2= 0;
    for(int i=0;i<n;i++){
        if(A[i]>max_2){
            max_2=A[i];
            if(max_2>max_1){
                int temp = max_2;
                max_2 = max_1;
                max_1 = temp;
            }
        }
        continue;
    }
    max.first = max_1;
    max.second = max_2;
    return max;
}

