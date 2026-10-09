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
    temp=B;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<i;j++){
            temp.pop_front();
        }
        for(auto b : temp){
        if(b==1) count++;
        }
        if(count_1_in_dq(temp)%2!=0){
        while(true){
            if(*(temp.end()-1)==1) {
                temp.pop_back();
                break;
            }
            else temp.pop_back();
        } 
        }
    if(temp.size()>B.size()) {
        B = temp;
        result.push_back({i,i+temp.size()});
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