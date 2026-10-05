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
#include<set>
using namespace std; 
vector<int> sum_prefix(int num[],int n){
    vector<int> sumprefix;
    int sum = 0;
    for(int i=0;i<n;i++){
    sum+=num[i];
    sumprefix.push_back(sum);
    }
    return sumprefix;    
}
bool check_has_sub_array(vector<int> sumprefix, int num[],int n){
    set<int> s;
    s.insert(0);
    for (int i = 0; i<n; i++){
    if(num[i]==0) return true;
    }
    
    for(int sum : sumprefix){
        if (sum==0) return true;
        if (s.find(sum)!=s.end()){
            return true;
        }
        else s.insert(sum);
    }
    return false;
}
int main(){
    int n;
    bool check;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int num[n];
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    vector<int> v = sum_prefix(num,n);
    check = check_has_sub_array(v,num,n);
    if (check == true) {
        cout << "Subarray exists";
        return 1;
    }
    else {
        cout << "Subarray does not exist";
        return 0;
    }
}