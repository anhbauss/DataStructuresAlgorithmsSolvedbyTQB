#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

void merge_two_arr(int A[], int* p1,int *p2, int size_A, int n){
   int *p1_temp,*p2_temp;
   p1_temp = p1;
   p2_temp = p2;
   while(p1_temp<p2_temp &&  p2_temp<A+size_A){
      if(*p1_temp<=*p2_temp) p1_temp++;
      else{
        int temp = *p2_temp;
        for(int* p=p2_temp-1;p>=p1_temp;p--){
            int a = *p;
            p++;
            *p = a;
            p--;
        }
        *p1_temp = temp;
        p1_temp++;
        p2_temp++;
      }
   }
   for(int i=0;i<n;i++){
    if(i<n-1)
    cout<<A[i]<<" ";
    else cout<<A[i]<<endl;
   }
   return;
}

void merge_sort(int A[], int i, int j,int n){
    if(i==j) return;
    int giua= (int)((i+j)/2);
    merge_sort(A,i,giua,n);
    merge_sort(A,giua+1,j,n);
    int *p1= A+i;
    int *p2= A+giua;
    int size_arr = j-i;
    merge_two_arr(A,p1,p2,size_arr,n);
    return;
}

int main(){
int n;
 cout<<"Vui long nhap gia tri cua n: "<<endl;
 cin>>n;
 int A[n];
 cout<<"Vui long nhap gia tri vao mang:"<<endl;
 for(int i=0;i<n;i++){
    cin>>A[i];
 }
 //A[n]= 101,23,57,13,25,121,87,36,13,204,111,89,59
 merge_sort(A,0,n-1,n);
 return 0;
}