//============================================================================
// Name        : bubble-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
	for(int i=0; i<size; i++){
		bool con = false;
		for(int j=0; j<size-i; j++){
			if(A[j]>A[j+1]){
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				con = true;
			}
			if(!con) break;
		}
	}
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */
}
