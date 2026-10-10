#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Vui long nhap gia tri cua m,n:"<<endl;
    cin>>n;
    cin>>m;
    int A[n];
    int B[m];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    //Day cac phan tu khac khong trong A ve cuoi
    int *p1,*p2;
    p2=A+n-1;
    p1=p2;
    while(p2>=A && p1>=A){
        if(*p2!=0) p2--;
        if(*p1==0) p1--;
        if(*p2==0 && *p1!=0){
            int temp = *p2;
            *p2 = *p1;
            *p1 = temp;
            p2--;
            p1--;
        }
    }
    p2=A+n-1;
    while(*p2!=0) p2--;
    p2++;
    p1=B;
    int *p3=A;
    while(p3<p2){
        if(*p1<*p2) {
            *p3=*p1;
            p1++;
            p3++;
        }
        else{
            *p3=*p2;
            p2++;
            p3++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}