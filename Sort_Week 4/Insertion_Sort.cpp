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
        if(Mang[j]<=Mang[i]){
            Mang[j]=Mang[i];   
        }
        else continue;
        int temp = Mang[j+1];
        Mang[j+1]=Mang[j];
    }
}
cout<<"Mang sau khi sap xep:"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<Mang[i]<<" ";
}

return 0;
}