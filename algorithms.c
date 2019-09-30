/* 
Sprints Wave 4 - Challenge 3- Time & Space complexity 
Developed By: Mina Raouf

In this file we will implement the functions that implement the algorithms of 
Linear Search
Binary Search
Bubble Sort
Merge Sort
Selection Sort
Insertion Sort "NOT mentioned in the challenge, but i will implement it to get to know it."

And calculates their Corresponding time & space complexity
*/

#include "algorithms.h"

int linear_search(int * arr, int arr_size, int num)
{
/* The following function MUST OPERATE ON AN ARRAY SORTED IN ASCENDING ORDER.If not it will automatically searches for the entered element
and returns the index in which the target exists.
*/
	int counter, match_flag = 0;
	for (counter = 0; counter < arr_size; counter++)
	{
		if ((arr[counter]) == num)
		{
			match_flag = 1;
			break;
		}
	}
	if (match_flag == 1)
	{
		return counter;
	}
	else 
	{
		return 0;
	}
	
}
/* Time Complexity on Hypothentical model
Time Complexity on every line of code in the above function is 1 +n+ n+ n + 1 + 1 + 1
Time Complexity = 2n + 3 = c*n + c = n
To calculate the upper limit
f(n) = 2n+3 
g(n) = n, C = 5 "2+3"
f(0) = 3, g(0) = 0 not satisfied
f(1) = 3, g(1) = 8 satisfied
hence, f(n) <= c * g(n) * for n>= n0
Space Complexity = 1 "Variable"+ 1 "Return"+ 3 "Arguments"
Space Complexity = 5 "Constant" = O (1)
*/

int binary_search(int * arr, int arr_size, int num)
{
	/* 
	NOTE: This function MUST OPERATE ON AN ARRAY SORTED ASCENDING ORDER. If not the code will automatically call the bubble sort function.
	The following function searches for the number in array, by comparing it to the value of the middle element.
	If the number is greater than the middle element, then we will discard the left half of the array and starts from the middle.
	If the number is less than the middle element, then we will discard the right half of the array and ends in the middle.
	*/
	int match_flag = 0 , start = 0, middle, end = (arr_size - 1), counter;
	while (!match_flag)
	{
		middle = (start + end) / 2;
		if (num > arr[middle])
		{
			start = middle;
		}
		else if (num < arr[middle])
		{
			end = middle;
		}
		else if (num == arr[middle])
		{
			match_flag = 1;
			return middle;
		}
	}
	if (match_flag == 0)
	{
		return 0;
	}
}
/* Time Complexity on Hypothentical model
Time Complexity on every line of code in the above function is 1 + n + 1
Time Complexity = n + 2 = c*n + c = n
To calculate the upper limit
f(n) = n+2 
g(n) = n, C = 10
f(0) = 2, g(0) = 0 not satisfied
f(1) = 3, g(1) = 10 satisfied
hence, f(n) <= c * g(n) * for n>= n0
Space Complexity = 5 "Variable"+ 2 "Return"+ 3 "Arguments"
Space Complexity = 10 "Constant" = O (1)
*/

void bubble_sort (int * arr, int arr_size) 
{
	/* In this function, we will sort this array. By iterating on the element and compare the rest of the array elements
	and check if it's sorted, then it will iterate on the next element and compare it with the next one and the rest of the array.
	To assure the convenience. In the main we will call the sort functions first then call the search functions afterwards
	*/ 
	int counter, counter_2, temp;
	for (counter = 0; counter < arr_size; counter++)
	{
		for (counter_2 = counter + 1; counter_2 < arr_size; counter_2++)
		{
			if (arr[counter] > arr[counter_2])
			{
				temp = arr[counter];
				arr[counter] = arr[counter_2];
				arr[counter_2] = temp;
			}
		}
	}
}

/* Time Complexity on Hypothentical model
Time Complexity on every line of code in the above function is 1+n*n
Time Complexity = n^2 + 1
To calculate the upper limit
f(n) = n^2+1 
g(n) = n^2, C = 5
f(0) = 1, g(0) = 0 not satisfied
f(1) = 2, g(1) = 5 satisfied
hence, f(n) <= c * g(n) * for n>= n0
Space Complexity = 3 "Variable"+ 0 "Return"+ 2 "Arguments"
Space Complexity = 5 "Constant" = O (1)
*/

void selection_sort (int * arr, int arr_size)
{
	int counter, counter_2, temp, min_counter;
	for (counter = 0; counter < arr_size; counter++)
	{
		for (counter_2 = counter+1; counter_2 < arr_size; counter_2++)
		{
			if (arr[counter] > arr[counter_2])
			{
				min_counter = counter_2;
				temp = arr[counter_2];
				arr[counter_2] = arr[counter];
				arr[counter] = temp;
			}
			
		}
	}
}

/* Time Complexity on Hypothentical model
Time Complexity on every line of code in the above function is 1+n*n
Time Complexity = 1+ n*n
To calculate the upper limit
f(n) = n^2+1 
g(n) = n^2, C = 3
f(0) = 1, g(0) = 0 not satisfied
f(1) = 2, g(1) = 3 satisfied
hence, f(n) <= c * g(n) * for n>= n0
Space Complexity = 4 "Variable"+ 0 "Return"+ 2 "Arguments"
Space Complexity = 6 "Constant" = O (1)
*/

void merge(int arr[], int left, int middle, int right) 
{ 
	/* The following function splits the array to two sub arrays called left and copy them again to the main array*/
    int counter_0, counter_1, counter_2; 
    int boundary_1 = middle - left + 1; 
    int boundary_2 =  right - middle; 
  
    /* create temp arrays */
    int left_arr [boundary_1], right_arr [boundary_2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (counter_0 = 0; counter_0 < boundary_1; counter_0++) 
        left_arr[counter_0] = arr[left + counter_0]; 
    for (counter_1 = 0; counter_1 < boundary_2; counter_1++) 
        right_arr[counter_1] = arr[middle + left+ counter_1]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    counter_0 = 0; // Initial index of first subarray 
    counter_1 = 0; // Initial index of second subarray 
    counter_2 = left; // Initial index of merged subarray 
    while ((counter_0 < boundary_1) && (counter_1 < boundary_2)) 
    { 
        if (left_arr[counter_0] <= right_arr[counter_1]) 
        { 
            arr[counter_2] = left_arr[counter_0]; 
            counter_0++; 
        } 
        else
        { 
            arr[counter_2] = right_arr[counter_1]; 
            counter_1++; 
        } 
        counter_2++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (counter_0 < boundary_1) 
    { 
        arr[counter_2] = left_arr[counter_0]; 
        counter_0++; 
        counter_2++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (counter_1 < boundary_2) 
    { 
        arr[counter_2] = right_arr[counter_1]; 
        counter_1++; 
        counter_2++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int left, int right) 
{ 
    if (left < right) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int middle = left+(right-left)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, left, middle); 
        mergeSort(arr, middle+1, right); 
        merge(arr, left, middle, right); 
    } 
} 