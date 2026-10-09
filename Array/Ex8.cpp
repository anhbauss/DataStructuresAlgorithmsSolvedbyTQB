#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n: "<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<pair<int,int>> rs;
    rs = find_largest_array(A,n);
    int i_max =0 ;
    int j_max =0;
    cout<<"Largest array is {";
    for(auto p : rs){
    if(p.second-p.first>=j_max-i_max){
        for(int i = i_max;i<=j_max;i++){
            cout<<" "<<A[i]<<",";
        }
    } 
    }
    cout<<"}";
}