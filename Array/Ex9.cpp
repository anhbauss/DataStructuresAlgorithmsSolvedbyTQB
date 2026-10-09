#include<stdio.h>
#include<iostream>

using namespace std;

void sort(int A[],int n,int a, int b);

int main(){
    int n;
    cout<<"Vui long nhap gia tri cua n:"<<endl;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    sort(A,n,0,1);
    sort(A,n,1,2);
    for(int i=0; i<n;i++){
        cout<<A[i];
        if(i< n-1)
        cout<<" ";
        else continue;
    }
    return 0;
}

void sort(int A[],int n,int a,int b){
    int* p1;
    int* p2;
    p1=&A[0];
    p2=p1+n-1;
    while(p1<p2){
      while(*p1==a) p1++;
      while(*p2==b) p2--;
      if(p1<p2){
        int temp = *p1;
        *p1=*p2;
        *p2=temp;
        p1++;
        p2--;
      }
    }
    return;
}


