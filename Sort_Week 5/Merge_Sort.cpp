#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;

void merge_two_arr(int A[], int* p1,int *p2, int size_A){
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
   return;
}

void merge_sort(int A[], int i, int j){
    if(i==j) return;
    int giua= (int)((i+j)/2);
    merge_sort(A,i,giua);
    merge_sort(A,giua+1,j);
    int *p1= A+i;
    int *p2= A+giua;
    int size_arr = j-i;
    merge_two_arr(A,p1,p2,size_arr);
    return;
}

int main(){
    
}