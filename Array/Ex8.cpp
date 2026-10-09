#include<stdio.h>
#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int count_1_in_dq(const deque<int>& dq){
    int count =0;
    for(auto i : dq){
        if(i==1) count++;
    }
    return count;
}

vector<pair<int,int>> find_array_has_sum_0(int A[],int n){
    vector<pair<int,int>> result;
    deque<int> B,temp;
    for(int i=0;i<n;i++){
        B.push_back(A[i]);
    }
    int max_size =0;
    for(int i=0;i<n;i++){
        temp.clear();
        int count_0=0,count_1=0;
        for(int j=i;j<n;j++){
            temp.push_back(B[j]);
            if(B[j]==0) count_0++;
            else if(B[j]==1) count_1++;
            if(count_0 == count_1 && temp.size()>max_size){
                max_size = temp.size();
                result.clear();
                result.push_back({i,j});
            }
        }
    }
    return result;
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
    cout<<"Largest array is {";
    if(rs.empty()!=1){
        int i_max = rs[0].first;
        int j_max = rs[0].second;
        for(int i=i_max;i<=j_max;i++) cout<<" "<<A[i]<<",";
    } 
    cout<<"}";
}