/*Check if a subarray with 0 sum exists or not
Given an integer array, check if it contains a subarray having zero-sum.
For example,
Input:  { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 } 
Output: Subarray with zero-sum exists The subarrays with a sum of 0 are: 
{ 3, 4, -7 }{ 4, -7, 3 }{ -7, 3, 1, 3 }{ 3, 1, -4 }
 { 3, 1, 3, 1, -4, -2, -2 }{ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 }
*/
#include<stdio.h>
#include<iostream>
#include<vector>
#include<unordered_map>
#include "ALGORITHM.h"
using namespace std; 
struct cout_data{
    vector<int> sum_prefix;
    bool did_it_printed;
};
cout_data sum_prefix(int num[],int n){
    int sum=0;
    cout_data data;
    bool printed = false;
    vector<int> sum_prefix_v;
    for(int i=0;i<n;i++){
        sum +=num[i];
        sum_prefix_v.push_back(sum);
    }
    int count =0;
    for(auto it= sum_prefix_v.begin();it!=sum_prefix_v.end();++it){
        if (*it==0) {
            printed = true;
            if(count==0) cout<<"The subarrays with a sum of 0 are:"<<endl;
            cout<<"{";
            for (int i=0;i<my_distance(sum_prefix_v.begin(),it)+1;i++){
            if(i==0) cout<<num[i];
            else cout<<","<<num[i];
            }
            cout<<"}"<<endl;
            count++;
        }
    }
    data.sum_prefix = sum_prefix_v;
    data.did_it_printed = printed;
    return data;
}
unordered_map<int,int> sum_equal_zero(cout_data data){
    unordered_map<int,int> has_equal_value;
    vector<int> sum_vector = data.sum_prefix;
    int i = 0; 
    for(int integer : sum_vector){
        pair<int,int> key_value;
        auto pos = find(sum_vector.begin()+i+1,sum_vector.end(),integer);
        if(pos!=sum_vector.end()){
            key_value.first = i;
            key_value.second = my_distance(sum_vector.begin(),pos);
            has_equal_value.insert(key_value);
        }
        i++;
    }
    return has_equal_value;
}
bool find_subarrays(unordered_map<int,int> has_equal_value, int num[], int n,cout_data data){
    vector<int> v(num,num+n);
    if (data.did_it_printed==false && has_equal_value.empty()==0 ) cout<<"The subarrays with a sum of 0 are:"<<endl;
    for (auto pair : has_equal_value){
        auto first = v.begin()+ pair.first+1;
        auto last = v.begin()+ pair.second;
        for(auto it=first;it!=last+1;++it){
            auto it_temp = it;
            if (it==first) cout<<"{"<<*it_temp;
            else cout<<","<<*it_temp;
        } 
        cout<<"}"<<endl;
    }
    if(has_equal_value.empty()==1) return false;
    return true;
}
int main(){
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int num[n];
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout_data data;
    data.did_it_printed = false;
    cout_data sumprefix = sum_prefix(num,n);
    unordered_map<int,int> zero_sum = sum_equal_zero(sumprefix);
    bool has_sub_array = find_subarrays(zero_sum, num,n,sumprefix)||sumprefix.did_it_printed;
    if (has_sub_array==false) cout<<"Subarray has no zero-sum exists"<<endl;
    return 0;   
}