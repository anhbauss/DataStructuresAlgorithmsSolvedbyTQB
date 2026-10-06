#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Vui long nhap gia tri cua n:"<<endl;
cin >> n;
int Mang[n];
for (int i=0;i<n;i++){
    cin>>Mang[i];
}
for(int i=0;i<n;i++){
    int min_address = i;
    for(int j=i;j<n;j++){
     if(Mang[min_address]>Mang[j]){
       min_address=j;
       }
    }
    int temp = Mang[i];
    Mang[i] = Mang[min_address];
    Mang[min_address] = temp;
    for(int j=0;j<n;j++){
        cout<<Mang[j]<<" ";
        if(j==n-1) cout<<endl;
    }
}
return 0;
}