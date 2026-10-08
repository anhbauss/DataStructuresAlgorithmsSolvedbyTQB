#include<stdio.h>
#include<iostream>
#include<vector>
#include "ALGORITHM.h"

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
    vector<int> rs;
    for(int i=0;i<n;i++){
       vector<int> temp;
       for(int j=i;j<n;j++){
       if(tim(temp.begin()+1,temp.end(),A[j])!= temp.end())
       temp.push_back(A[j]);
       else break;
       }
       if (soluong(temp) > soluong(rs)) rs=temp;
       else continue; 
    }

}