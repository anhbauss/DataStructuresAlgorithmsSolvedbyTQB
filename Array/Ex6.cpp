#include<stdio.h>
#include<iostream>

using namespace std;
struct result{
    int size;
    int ARR[size];
};

int find_largest_array(int A[],int n);

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int A[] = find_largest_array(A,n);
    return 0;
}
