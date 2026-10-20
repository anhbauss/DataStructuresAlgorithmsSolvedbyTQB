/*
Find the index of 0 to be replaced to get the maximum length sequence of continuous ones
Given a binary array, find the index of 0 to be replaced with 1 to get the maximum length sequence of continuous ones.

For example, consider the array { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 }. 
We need to replace index 7 to get the continuous sequence of length 6 containing all 1’s.
*/

//Giải thuật: Tìm kiếm từng mảng con trong mảng lớn sao cho mảng đấy toàn số 1 hoặc chỉ có một sô 0

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

vector<int> find_array(int A[],int n);

int main(){
    int n;
    cout<<"Vui long nhap so phan tu trong mang: "<<endl;
    cin>>n;
    int A[n];
    cout<<"Vui long nhap gia tri vao mang: "<<endl;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    vector<int> index= find_array(A,n);
    cout<<"{ ";
    for(int integer : index){
    cout<<integer<<" ";
    }
    cout<<"}"<<endl;
    return 0;
}

vector<int> find_array(int A[],int n){
    int *p1;
    int *p2;
    p1=A;
    p2=A+n-1;
    vector<int> index;
    int max_count=-1;
    int best_index=-1;
    while(p1<p2){
        if(*p1==0){
        int count_0=0;
        int count_num=0;
        int* ct = p1;
        while(ct<=p2){
            if(*ct==0) ct++;
            else count_num++;
            if(count_0>1) break;
            else if(count_0==1) {
                count_num++;
                if(count_num>best_index) {
                    max_count=count_num;
                    best_index=ct-p1;
            } 
        }
        if(count_0==0){
            if(count_num++==max_count){
                index.push_back(p1-A-1);
            }
            else if(count_num++>max_count){
                index.clear();
                index.push_back(best_index);
            }
        }
        }
        
    }
    p1++;
}
    return index;
}