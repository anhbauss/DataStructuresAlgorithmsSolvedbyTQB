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
        for(int* p=p2_temp-1;p>=p1_temp;p--)
      }
   }
}