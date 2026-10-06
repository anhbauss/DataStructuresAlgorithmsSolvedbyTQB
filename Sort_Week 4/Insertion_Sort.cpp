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
            
        }
    }
}

}