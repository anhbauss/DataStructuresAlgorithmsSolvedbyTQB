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
    for(int j=0;j<i;j++){
        if(Mang[j]>=Mang[i]){
            int temp=Mang[j];
            Mang[j]=Mang[i];
            for(int k=j;k<i;k++){
                int temp2 = Mang[k+1];
                Mang[k+1]=temp;
                temp = temp2;
            }   
        }
        else continue;
    }
    for(int j=0;j<n;j++){
    cout<<Mang[j]<<" ";
    if(j==n-1) cout<<endl;
    }
}


return 0;
}