#include<stdio.h>
#include<iostream>
#include<vector>

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
    vector<int> temp;
    for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
       if(temp.find(temp.begin()+1,temp.end(),A[j])!=NULL)
       temp.push_back(A[j]);
       }
    }
}