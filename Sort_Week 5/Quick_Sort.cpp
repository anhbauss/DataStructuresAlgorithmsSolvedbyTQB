#include<stdio.h>
#include<iostream>

using namespace std;
void quick_sort(int A[],int n);
int main(){
 int n;
 cout<<"Vui long nhap gia tri cua n":<<endl;
 cin>>n;
 int A[n];
 cout<<"Vui long nhap gia tri vao mang:"<<endl;
 for(int i=0;i<n;i++){
    cin>>A[i];
 }
 //A[n]= 101,23,57,13,25,121,87,36,13,204,111,89,59

}

void quick_sort(int A[],int n){
    int pivot = A[0];
    int* p1, *p2;
    p1=A+1;
    p2=A+n-2;
    while(p1<=p2){
        if(*p1>=pivot && *p2<=pivot){
        swap(p1,p2);
        p1++;
        p2--;
        continue;
        }
        if(*p1<pivot) p1++;
        if(*p2>pivot) p2--;
    }
}
