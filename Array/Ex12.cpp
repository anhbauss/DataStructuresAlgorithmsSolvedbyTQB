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
    int *p1=A;
    int *p2=A+n-1;
    vector<int> index;
    int max_count=-1;
    int best_index=-1;
    while(p2>=A){
    if(*p2==0){
        p2--;
        continue;
    }
    while(p1<=p2){
    if(*p1==0) {
        p1++;
        continue;
    }      
    int* ct=p1;
    int count_0=0;
    int count_num=0;
    int temp_index;
    pair<int,int> two;
    while(ct<=p2){
        if(*ct==0){
            count_0++;
            if(count_0<=1) {
                count_num++;
                temp_index=ct-A;
            }
            else break;
        }
        else{
            count_num++;
        }
        ct++;
    }
    if(count_0==0){
        count_num++;
        two.first=p1-A-1;
        two.second=p2-A+1;
        temp_index=-1;
    }
    if(count_num>max_count){
        max_count=count_num;
        index.clear();
        if(temp_index==-1){
            if(two.first>=0) index.push_back(two.first);
            if(two.second<n) index.push_back(two.second);
        }
        else index.push_back(temp_index);
    }
    else if(count_num==max_count){
        if(temp_index==-1){
            if(two.first>=0) index.push_back(two.first);
            if(two.second<n) index.push_back(two.second);
        }
        else index.push_back(temp_index);
    }
    p1++;
    }
    p1=A;
    p2--;
    }
    return index;
}