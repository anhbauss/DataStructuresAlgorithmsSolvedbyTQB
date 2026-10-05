#include<stdio.h>
#include<iostream>
#include<deque>
using namespace std;

deque<int> sort(int num[],int n){
    deque<int> dq;
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(num[j+1]<num[j]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        dq.push_back(num[i]);
    }
    return dq;
}
void findPair(deque<int>dq, int target){
    int count = 0;
    while (dq.empty()!=1 && dq.size()!=1)
{
    if(count>0) cout<<"or"<<endl;
    while(dq.front()+dq.back()>target){
        dq.pop_back();
    }
    if(dq.front()+dq.back()==target){
        cout<<"Pair found ("<<dq.front()<<","<<dq.back()<<")"<<endl;
        dq.pop_back();
        dq.pop_front();
        count++;
    }
    else{
        dq.pop_front();
    }
}
if (count==0) cout<<"Pair not found"<<endl;
return;
}
int main()
{
    int num[]= {8, 7, 2, 5, 3, 1};
    int target = 10;
    int n = sizeof(num)/sizeof(num[0]);
    findPair(sort(num,n),target);
    return 0;
}