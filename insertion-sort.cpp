//============================================================================
// Name        : insertion-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
	num_cmps = 0;
	for(int i=1; i<size; i++){
		int temp = A[i];
		int j=i;
		for(; j>0 && temp < A[j-1]; j--){
			num_cmps++;
			A[j] = A[j-1];
		}
		A[j]=temp;	
	}



  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
}
