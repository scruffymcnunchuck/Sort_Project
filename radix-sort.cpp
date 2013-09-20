//============================================================================
// Name        : radix-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

int power(int base, int power){
    if ( power == 0 ) { return 1; }
    else {
        int value = base;
        for ( int i = 1; i < two; ++i ) {
            value = value * base;
        }
        return value;
    }
}

int mod_num(int n, int exponent){
    if ( exponent > 1 ) {
        return n % power(10,exponent) - n % power(10,exponent-1);
    }
    if ( exponent == 1 ) { return n % 10; }
}

int determine_size(int n){
    int s;
    while ( n > 0 ){
        n=n/10;
        ++s;
    }
    return s;
}

void
RadixSort::sort(int A[], int size)
{
    
    for ( int i = 0; i < 5; ++i ){
        int exp = determine_size(test_array[i]);
        cout << mod_num(A[i]);
    }
    
  /*
     Complete this function with the implementation of radix sort
     algorithm.
  */
  
}
