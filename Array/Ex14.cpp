/*Shuffle an array using Fisher–Yates shuffle algorithm
Given an integer array, in-place shuffle it. The algorithm should produce an unbiased permutation, i.e., every permutation is equally likely.

Practice this problem

Fisher–Yates shuffle is an algorithm to generate random permutations. It takes time proportional to the total number of items being shuffled and shuffles them in place. The algorithm swaps the element at each iteration at random among all remaining unvisited indices, including the element itself.

Here’s the complete algorithm:

— To shuffle an array ‘a’ of ‘n’ elements:for i from n-1 down to 1 do    j = random integer such that 0 <= j <= i    exchange a[j] and a[i]*/

#include<stdio.h>
#include<iostream>

using namespace std;

int create_random_number(int a, int c, int n, int X_n){
  return (a*X_n+c)%n;
}

void shuffle(int A[],int n){
    int temp,a=0,c=0;
    int a=(A[0]>0)?A[0]:(-A[0]);
    a = A[0]%n;
    c = (A[1]>0)?A[1]:(-A[1]);
    c = A[1]%n;
    temp=create_random_number(a,c,n,a*c);
    for(int i=0;i<n;i++){
    swap(A[i],A[temp]);
    temp=create_random_number(a,c,n,temp);
    }
}
//X_{n+1} = (a*X_n + c) mod m