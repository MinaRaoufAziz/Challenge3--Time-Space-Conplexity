/* 
Sprints Wave 4 - Challenge 3- Time & Space complexity 
Developed By: Mina Raouf

In this file There will be the function prototypes for the functions that implement the algorithms of 
Linear Search
Binary Search
Bubble Sort
Merge Sort
Selection Sort
Insertion Sort "NOT mentioned in the challenge, but i will implement it to get to know it."

And calculates their Corresponding time & space complexity
*/

#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#define MAX_ARR_SIZE 6
extern int binary_search(int * , int size, int target);
extern int linear_search (int * , int size, int target);
extern void bubble_sort (int * , int target);
extern void selection_sort (int * , int target);
extern void merge(int* , int L_VALUE, int MID, int R_VALUE);
extern void merge_sort (int *,int L_VALUE, int R_VALUE);

#endif