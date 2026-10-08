#include<stdio.h>
#include<iostream>

using namespace std;
struct result{
    int n;
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
    for(int i=0;i<rs.n;i++){
    cout<<" "<<rs.ARR[i]<<",";
    if(i==rs.n-1) cout<<"}"<<endl;
    }
    return 0;
}
