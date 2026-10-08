#include<stdio.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> sum_prefix(const vector<int>& A){
    vector<int> output;
    int sum=0;
    for(auto c : A){
        sum += c;
        output.push_back(sum);
    }
    return output;
}

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    map<int,int> store;
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int target;
    cout<<"target = ";
    cin>>target;
    vector<int> input;
    for(int i=0;i<n;i++){
        for(auto j : input){
            j=A[i];
        }
    }
    vector<int> B = sum_prefix(input);
    int C[n];
    for(int i=0;i<n;i++){
        for(auto j : B){
            C[i]=j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;i<n;j++){
            if(C[j+1]-C[i]==target){
                pair<int,int> p;
                p.first = i;
                p.second = j;
                store.insert(p);
            }
        }
    }
    int i_max=0,j_max=0;
    cout<<"Subarrays with sum 8 are"<<endl;
    for(auto p : store){
        cout<<"{";
        for(int i= p.first;i<=p.second;i++){
            cout<<" "<<A[i]<<",";
        }
        cout<<"}"<<endl;
        if(p.second-p.first>j_max-i_max){
            i_max = p.first;
            j_max = p.second;
        }
    }
    cout<<"The longest subarray is {";
    for(int i= i_max;i<=j_max;i++){
        cout<<" "<<A[i]<<",";
    }
    cout<<" }"<<"having length "<<j_max-i_max<<endl;

    return 0;

}