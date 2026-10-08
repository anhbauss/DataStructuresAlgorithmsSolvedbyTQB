#include<stdio.h>
#include<iostream>

using namespace std;
struct result{
    int num;
    int ARR[];
};

result find_largest_array(int A[],int n);

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    result rs;
    rs = find_largest_array(A,n);
    cout<<"The largest subarray is {"<<endl;
    for(int i=0;i<rs.num;i++){
    cout<<" "<<rs.ARR[i]<<",";
    if(i==rs.num-1) cout<<"}"<<endl;
    }
    return 0;
}

result find_largest_array(int A[],int n){
    int* p1 = new int[n];
    int* init = p1;
    int count =0;
    for(int i=0;i<n;i++){
    int* p2 =init;
    while(p2<p1){
        if(*p2==A[i]) 
    }
    }
}