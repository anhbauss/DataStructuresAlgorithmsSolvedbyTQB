#include<stdio.h>
#include<iostream>
#include<vector>
#include "ALGORITHM.h"

using namespace std;
struct result{
    int num;
    vector<int> ARR;
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
    cout<<"The largest subarray is {";
    for(auto c : rs.ARR ){
    cout<<" "<<c<<",";
    }
    cout<<"}"<<endl;
    return 0;
}

result find_largest_array(int A[],int n){
    result B;
    vector<int> rs;
    for(int i=0;i<n;i++){
       vector<int> temp;
       int min = A[i];
       int max = A[i];
       for(int j=i;j<n;j++){
       if(tim(temp.begin(),temp.end(),A[j])!= temp.end()) break;
       temp.push_back(A[j]);
       if(A[j]< min) min = A[j];
       if(A[j]>max) max = A[j];
       if (max-min==soluong(temp)-1){
        if(soluong(temp)>soluong(rs)) rs=temp;
       }
       }
    }
    B.num = soluong(rs);
    B.ARR = rs;
    return B;
}