/*Shuffle an array using Fisher–Yates shuffle algorithm
Given an integer array, in-place shuffle it. The algorithm should produce an unbiased permutation, i.e., every permutation is equally likely.

Practice this problem

Fisher–Yates shuffle is an algorithm to generate random permutations. It takes time proportional to the total number of items being shuffled and shuffles them in place. The algorithm swaps the element at each iteration at random among all remaining unvisited indices, including the element itself.

Here’s the complete algorithm:

— To shuffle an array ‘a’ of ‘n’ elements:for i from n-1 down to 1 do    j = random integer such that 0 <= j <= i    exchange a[j] and a[i]*/

