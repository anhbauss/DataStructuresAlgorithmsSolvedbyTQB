#include<stdio.h>
#include<iostream>
#include<vector>
#i
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
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
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
    int start,finish;
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
            if(A[j]-A[i]==8){
                start = i;
                finish = j;
            }
        }

    }

}