#include<stdio.h>
#include<iostream>

using namespace std;

struct data_type{
    int num;
    int Arr[];
};
data_type quick_sort(data_type& Bo);
void doigiatri(int *p1,int *p2);
data_type concast(const data_type con1,const data_type con2,data_type& Bo,int pivot);
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
 data_type bd;
 bd.num= n;
 for(int i=0;i<n;i++){
    bd.Arr[i]=A[i];
 }
 quick_sort(bd);
 return 1;
}

data_type quick_sort(data_type& Bo){
    if(Bo.num<=1) return Bo;
    int pivot = Bo.Arr[0];
    int* p1, *p2;
    p1=Bo.Arr+1;
    p2=Bo.Arr+Bo.num-1;
    while(p1<=p2){
        if(*p1>=pivot && *p2<=pivot){
        doigiatri(p1,p2);
        p1++;
        p2--;
        for(int i=0;i<Bo.num;i++){
            if(i==Bo.num-1) cout<<" "<<Bo.Arr[i]<<endl;
            else cout<<" "<<Bo.Arr[i];
        }
        continue;
        }
        if(p1 <= Bo.Arr + Bo.num - 1 && *p1<pivot ) p1++;
        if( p2 >= Bo.Arr + 1 && *p2>pivot) p2--;
    }
    doigiatri(Bo.Arr,p2);
    int giua = p2- Bo.Arr;
    data_type con1,con2;
    con1.num=giua;
    con2.num=Bo.num-con1.num-1;
    for(int i=0;i<con1.num;i++){
        con1.Arr[i]=Bo.Arr[i];
    }
    for(int i=0;i<con2.num;i++){
        con2.Arr[i]=Bo.Arr[giua+i+1];
    }
    quick_sort(con1);
    quick_sort(con2);
    Bo=concast(con1,con2,Bo,Bo.Arr[giua]);
    return Bo;
}
void doigiatri(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return;
}
data_type concast(const data_type con1,const data_type con2,data_type& Bo,int pivot){
    int count =0;
    for(int i=0;i<con1.num;i++){
        Bo.Arr[i]=con1.Arr[i];
    }
    Bo.Arr[count]= pivot;
    count++;
    for(int i=0;i<con2.num;i++){
        Bo.Arr[i]=con2.Arr[i];
    }
    return Bo;
}