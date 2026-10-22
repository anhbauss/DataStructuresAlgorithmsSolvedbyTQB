# Testcase đã chạy thực tế

# Ex1: Find pair with given sum in the array

Mã nguồn: `Ex1.cpp`

## Testcase 1:

+ Input: n = 6, A[6] = {8, 7, 2, 5, 3, 1}, target = 10

+ Output:
  Pair found (2,8)
  or
  Pair found (3,7)

## Testcase 2:

+ Input: n = 5, A[5] = {1, 2, 3, 4, 5}, target = 20

+ Output:
  Pair not found

## Testcase 3:

+ Input: n = 4, A[4] = {5, 5, 5, 5}, target = 10

+ Output:
  Pair found (5,5)
  or
  Pair found (5,5)

# Ex2: Check if subarray with 0 sum exists or not

Mã nguồn: `Ex2.cpp`

## Testcase 1:

+ Input: n = 10, A[10] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2}

+ Output:
  Subarray exists

## Testcase 2:

+ Input: n = 4, A[4] = {1, 2, 3, 4}

+ Output:
  Subarray does not exist

## Testcase 3:

+ Input: n = 4, A[4] = {10, -10, 5, 2}

+ Output:
  Subarray exists

# Ex3: Print all sub-arrays with 0 sum

Mã nguồn: `Ex3.cpp`

## Testcase 1:

+ Input: n = 10, A[10] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2}

+ Output:
  The subarrays with a sum of 0 are:
  {3,4,-7}
  {3,4,-7,3,1,3,1,-4,-2,-2}
  {3,1,-4}
  {3,1,3,1,-4,-2,-2}
  {-7,3,1,3}
  {4,-7,3}

## Testcase 2:

+ Input: n = 4, A[4] = {1, 2, 3, 4}

+ Output:
  Subarray has no zero-sum exists

## Testcase 3:

+ Input: n = 4, A[4] = {1, -1, 2, -2}

+ Output:
  The subarrays with a sum of 0 are:
  {1,-1}
  {1,-1,2,-2}
  {2,-2}

# Ex4: Sort binary array in linear time

Mã nguồn: `Ex4.cpp`

## Testcase 1:

+ Input: n = 8, A[8] = {0, 1, 0, 1, 1, 0, 0, 1}

+ Output:
  0 0 0 0 1 1 1 1

## Testcase 2:

+ Input: n = 6, A[6] = {1, 0, 1, 1, 0, 0}

+ Output:
  0 0 0 1 1 1

## Testcase 3:

+ Input: n = 2, A[2] = {1, 0}

+ Output:
  0 1

# Ex5: Find a duplicate element in a limited range array

Mã nguồn: `Ex5.cpp`

## Testcase 1:

+ Input: n = 6, A[6] = {1, 2, 3, 4, 4, 5}

+ Output:
  The duplicate element is 4

## Testcase 2:

+ Input: n = 5, A[5] = {0, 3, 1, 2, 3}

+ Output:
  The duplicate element is 3

## Testcase 3:

+ Input: n = 4, A[4] = {1, 2, 2, 3}

+ Output:
  The duplicate element is 2

# Ex6: Find largest sub-array formed by consecutive integers

Mã nguồn: `Ex6.cpp`

## Testcase 1:

+ Input: n = 8, A[8] = {2, 0, 2, 1, 4, 3, 1, 0}

+ Output:
  The largest subarray is { 0, 2, 1, 4, 3,}

## Testcase 2:

+ Input: n = 6, A[6] = {10, 12, 11, 14, 13, 15}

+ Output:
  The largest subarray is { 10, 12, 11, 14, 13, 15,}

## Testcase 3:

+ Input: n = 4, A[4] = {5, 1, 3, 2}

+ Output:
  The largest subarray is { 1, 3, 2,}

# Ex7: Find maximum length sub-array having given sum

Mã nguồn: `Ex7.cpp`

## Testcase 1:

+ Input: n = 10, A[10] = {5, 6, -5, 5, 3, 5, 3, -2, 0, 8}, target = 8

+ Output:
  Subarrays with sum 8 are
  { -5, 5, 3, 5 }
  { 5, 3 }
  { 3, 5 }
  { 5, 3 }
  { 0, 8 }
  { 8 }
  The longest subarray is { -5, 5, 3, 5 }having length 4

## Testcase 2:

+ Input: n = 6, A[6] = {1, 2, 1, 1, 1, 2}, target = 3

+ Output:
  Subarrays with sum 3 are
  { 1, 2 }
  { 2, 1 }
  { 1, 1, 1 }
  { 1, 2 }
  The longest subarray is { 1, 1, 1 }having length 3

## Testcase 3:

+ Input: n = 8, A[8] = {5, 6, 1, -2, -4, 3, 1, 5}, target = 5

+ Output:
  Subarrays with sum 5 are
  { 5 }
  { 6, 1, -2 }
  { 6, 1, -2, -4, 3, 1 }
  { -4, 3, 1, 5 }
  { 5 }
  The longest subarray is { 6, 1, -2, -4, 3, 1 }having length 6

# Ex8: Find maximum length sub-array having equal number of 0’s and 1’s

Mã nguồn: `Ex8.cpp`

## Testcase 1:

+ Input: n = 8, A[8] = {0, 1, 0, 1, 1, 0, 0, 1}

+ Output:
  Largest array is { 0, 1, 0, 1, 1, 0, 0, 1,}

## Testcase 2:

+ Input: n = 6, A[6] = {0, 1, 0, 1, 1, 0}

+ Output:
  Largest array is { 0, 1, 0, 1, 1, 0,}

## Testcase 3:

+ Input: n = 7, A[7] = {1, 1, 1, 0, 0, 0, 1}

+ Output:
  Largest array is { 1, 1, 1, 0, 0, 0,} or { 1, 1, 0, 0, 0, 1,}

# Ex9: Sort an array containing 0’s, 1’s and 2’s (Dutch national flag problem)

Mã nguồn: `Ex9.cpp`

## Testcase 1:

+ Input: n = 9, A[9] = {0, 1, 2, 0, 1, 2, 1, 0, 2}

+ Output:
  { 0, 0, 0, 1, 1, 1, 2, 2, 2 }

## Testcase 2:

+ Input: n = 6, A[6] = {2, 2, 1, 0, 1, 0}

+ Output:
  { 0, 0, 1, 1, 2, 2 }

## Testcase 3:

+ Input: n = 8, A[8] = {2, 1, 0, 2, 0, 1, 2, 0}

+ Output:
  { 0, 0, 0, 1, 1, 2, 2, 2 }

# Ex10: Inplace merge two sorted arrays

Mã nguồn: `Ex10.cpp`

## Testcase 1:

+ Input: n = 6, m = 6, X[6] = {1, 3, 4, 6, 7, 8}, Y[6] = {4, 5, 7, 8, 9, 10}

+ Output:
  X[] = { 1, 3, 4, 4, 5, 6 }
  Y[] = { 7, 7, 8, 8, 9, 10 }

## Testcase 2:

+ Input: n = 4, m = 4, X[4] = {1, 5, 9, 10}, Y[4] = {2, 3, 8, 13}

+ Output:
  X[] = { 1, 2, 3, 5 }
  Y[] = { 8, 9, 10, 13 }

## Testcase 3:

+ Input: n = 5, m = 5, X[5] = {1, 4, 7, 8, 10}, Y[5] = {2, 3, 9, 11, 12}

+ Output:
  X[] = { 1, 2, 3, 4, 7 }
  Y[] = { 8, 9, 10, 11, 12 }

# Ex11: Merge two arrays by satisfying given constraints

Mã nguồn: `Ex11.cpp`

## Testcase 1:

+ Input: n = 9, m = 5, X[9] = {0, 2, 0, 3, 0, 5, 6, 0, 0}, Y[5] = {1, 8, 9, 10, 11}

+ Output:
  X[] = { 1, 2, 3, 5, 6, 8, 9, 10, 11 }

## Testcase 2:

+ Input: n = 11, m = 7, X[11] = {0, 0, 0, 0, 0, 0, 0, 4, 9, 12, 17}, Y[7] = { 5, 7, 8, 11, 13, 14, 15}

+ Output:
  X[] = { 4, 5, 7, 8, 9, 11, 12, 13, 14, 15, 17 }

# Ex12: Find index of 0 to replaced to get maximum length sequence of continuous ones

Mã nguồn: `Ex12.cpp`

## Testcase 1:

+ Input: n = 10, A[10] = {0, 0, 1, 0, 1, 1, 1, 0, 1, 1}

+ Output:
  { 0 7 }

## Testcase 2:

+ Input: n = 5, A[5] = {1, 1, 0, 1, 1}

+ Output:
  { 2 }

## Testcase 3:

+ Input: n = 7, A[7] = {0, 1, 1, 1, 0, 1, 1}

+ Output:
  { 4 }

# Ex13: Find maximum product of two integers in an array

Mã nguồn: `Ex13.cpp`

## Testcase 1:

+ Input: n = 5, A[5] = {-10, -3, 5, 6, -2}

+ Output:
  The maximum product is the (6, 5)  or(-10, -3) pair.

## Testcase 2:

+ Input: n = 4, A[4] = {1, 2, 3, 4}

+ Output:
  The maximum product is the (4, 3) pair.

## Testcase 3:

+ Input: n = 6, A[6] = {-4, -1, -7, 2, 5, 3}

+ Output:
  The maximum product is the (7, 4) pair.

# Ex14: Shuffle a given array of elements (Fisher–Yates shuffle)

Mã nguồn: `Ex14.cpp`

## Testcase 1:

+ Input: n = 5, A[5] = {1, 2, 3, 4, 5}

+ Output:
  ( 5, 2, 1, 4, 3 )

## Testcase 2:

+ Input: n = 6, A[6] = {3, 7, 1, 9, 4, 2}

+ Output:
  ( 4, 2, 3, 7, 9, 1 )

## Testcase 3:

+ Input: n = 8, A[8] = {10, 20, 30, 40, 50, 60, 70, 80}

+ Output:
  ( 30, 70, 10, 50, 80, 40, 60, 20 )

# Ex15: Rearrange the array with alternate high and low elements

Mã nguồn: `Ex15.cpp`

## Testcase 1:

+ Input: n = 5, A[5] = {9, 6, 8, 3, 7}

+ Output:
  ( 3, 7, 6, 9, 8 )

## Testcase 2:

+ Input: n = 8, A[8] = {3, 6, 7, 9, 14, 17, 19, 31}

+ Output:
  ( 3, 7, 6, 14, 9, 19, 17, 31 )

## Testcase 3:

+ Input: n = 4, A[4] = {4, 1, 3, 2}

+ Output:
  ( 1, 3, 2, 4 )

# Ex16: Find equilibrium index of an array

Mã nguồn: `Ex16.cpp`

## Testcase 1:

+ Input: n = 8, A[8] = {0, -3, 5, -4, -2, 3, 1, 0}

+ Output:
  Equilibrium Index found at 0
  Equilibrium Index found at 3
  Equilibrium Index found at 7

## Testcase 2:

+ Input: n = 4, A[4] = {1, 2, 3, 4}

+ Output:
  Equilibrium Index not found

## Testcase 3:

+ Input: n = 7, A[7] = {-7, 1, 5, 2, -4, 3, 0}

+ Output:
  Equilibrium Index found at 3
  Equilibrium Index found at 6

# Ex17: Find majority element in an array (Boyer–Moore majority vote algorithm)

Mã nguồn: `Ex17.cpp`

## Testcase 1:

+ Input: n = 11, A[11] = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2}

+ Output:
  The majority element is 2

## Testcase 2:

+ Input: n = 6, A[6] = {1, 2, 3, 1, 2, 3}

+ Output:
  The majority element doesn't exist

## Testcase 3:

+ Input: n = 4, A[4] = {1, 2, 2, 2}

+ Output:
  The majority element is 2

# Ex18: Move all zeros present in the array to the end

Mã nguồn: `Ex18.cpp`

## Testcase 1:

+ Input: n = 9, A[9] = {6, 0, 8, 2, 3, 0, 4, 0, 1}

+ Output:
  ( 6, 8, 2, 3, 4, 1, 0, 0, 0 )

## Testcase 2:

+ Input: n = 5, A[5] = {0, 0, 0, 4, 5}

+ Output:
  ( 4, 5, 0, 0, 0 )

## Testcase 3:

+ Input: n = 6, A[6] = {1, 2, 3, 4, 5, 6}

+ Output:
  ( 1, 2, 3, 4, 5, 6 )

# Ex19: Replace each element of array with product of every other element without using / operator

Mã nguồn: `Ex19.cpp`

## Testcase 1:

+ Input: n = 5, A[5] = {1, 2, 3, 4, 5}

+ Output:
  ( 120, 60, 40, 30, 24 )

## Testcase 2:

+ Input: n = 6, A[6] = {5, 3, 4, 2, 6, 8}

+ Output:
  ( 1152, 1920, 1440, 2880, 960, 720 )

## Testcase 3:

+ Input: n = 4, A[4] = {2, 3, 0, 4}

+ Output:
  ( 0, 0, 24, 0 )

# Ex20: Find Longest Bitonic Subarray in an array

Mã nguồn: `EX20.cpp`

## Testcase 1:

+ Input: n = 11, A[11] = {3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4}

+ Output:
  (  4, 5, 9, 10, 8, 5, 3, )

## Testcase 2:

+ Input: n = 5, A[5] = {5, 4, 3, 2, 1}

+ Output:
  (  5, 4, 3, 2, 1, )

## Testcase 3:

+ Input: n = 6, A[6] = {1, 2, 3, 4, 5, 6}

+ Output:
  (  1, 2, 3, 4, 5, 6, )