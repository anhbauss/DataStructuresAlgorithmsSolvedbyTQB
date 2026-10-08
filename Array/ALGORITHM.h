#ifndef ALGORITHM_H
#define ALGORITHM_H
#include<stdio.h>
#include<iostream>
template <typename It, typename T>

It find(It first,  It last, const T& target){
  while (first != last){
    if (*first == target){
        return first;
    }
    ++first;
  }
return last;
}
template <typename It>
int my_distance(It first, It last){
    int count=0;
    while (first!=last){
        first++;
        count++;
    }
    return count;
}

int soluong(const vector<int>& mang ){
   int* start = mang.begin();
   int

}
#endif