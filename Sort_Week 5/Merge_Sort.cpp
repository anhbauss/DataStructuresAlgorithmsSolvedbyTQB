#include<stdio.h>
#include<iostream>

using namespace std;

struct recurssion_type{
    int* p;
    int num;
};

void Merge_Sort(int A[],int n);

int main(){
 int n;
 cout<<"Vui long nhap gia tri cua n: "<<endl;
 cin>>n;
 int A[n];
 cout<<"Vui long nhap gia tri vao mang:"<<endl;
 for(int i=0;i<n;i++){
    cin>>A[i];
 }
 //A[n]= 101,23,57,13,25,121,87,36,13,204,111,89,59
 Merge_Sort(A,n);
 return 0;
}

void Merge_Sort(int A[],int n){
    int a;
    int index[a];
    int low=0;
    int high= n-1;
    int giua = (int)(low+high)/2;
}