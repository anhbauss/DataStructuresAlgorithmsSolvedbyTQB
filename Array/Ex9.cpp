#include<stdio.h>
#include<iostream>

using namespace std;

int count(int A[] ,int n,int target);
void swap(int*& a,int*& b){
    int temp = *a;
    *a = *b;
    *b = temp; 
    return;
}

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int count_0, count_1, count_2;
    count_0 = count(A,n,0);
    count_1 = count(A,n,1);
    count_2 = count(A,n,2);
    int *p1,*p2;
    p1 = A ;
    p2 = A + count_0;
    while(p1!=A+count_0 && p2!=A+count_0+count_1+count_2){
        if(*p1!=0) p1++;
        if(*p2!=0)  p2++;
        else if(*p1==0&&*p2==0) swap(p1,p2);
    }
    p1 =A;
    p2 = A+count_0;
    while(p1!=A+count_0+count_1+count_2 && p2!=A+count_0+count_1){
        if(*p1!=1) p1++;
        if(*p2!=1)  p2++;
        else if(*p1==1&&*p2==1) swap(p1,p2);
        if(p1==A+count_0) p1=A+count_0+count_1;
    }

    p1 = A ;
    p2 = A+count_0+count_1;
    while(p1!=A+count_0+count_1 && p2!=A+count_0+count_1+count_2){
        if(*p1!=1) p1++;
        if(*p2!=1)  p2++;
        else if(*p1==1&&*p2==1) swap(p1,p2);
    }
    cout<<"{";
    for(int i=0;i<n;i++){
      if(i<n-1)   
        cout<<" "<<A[i]<<",";
      else cout<<" "<<A[i]<<" }"<<endl;
    }
    return 0;
}

int count(int A[] ,int n,int target){
    int c = 0;
    for(int i=0;i<n;i++){
        if(A[i]==target) c++;
    }
    return c;
}



