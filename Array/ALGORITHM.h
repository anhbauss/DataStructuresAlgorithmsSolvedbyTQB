#ifndef ALGORITHM_H
#define ALGORITHM_H
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

template <typename It, typename T>

It tim(It first,  It last, const T& target){
  while (first != last){
    if (*first == target){
        return first;
    }
    ++first;
  }
return last;
}
template <typename It>
int my_distance_b(It first, It last){
    int count=0;
    while (first!=last){
        first++;
        count++;
    }
    return count;
}

int soluong(const vector<int>& mang ){
   auto bd = mang.begin();
   auto kt = mang.end();
   return bd - kt;
}
#endif