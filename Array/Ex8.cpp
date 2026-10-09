#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

vector<pair<int,int>> find_array_has_sum_0(int A[],int n){
    vector<int> B;
    for(int i=0;i<n;i++){
        B.push_back(A[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
    for(auto b : B){
    if(b==1) count++;
    }
    }

}

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n: "<<endl;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<pair<int,int>> rs;
    rs = find_array_has_sum_0(A,n);
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