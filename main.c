/* Sprints Wave 4 - Challenge 3
Time & Space Complexity Challenge
Developed By: Mina Raouf
In this function we will call the algorithms implemented in the algorithms.c file and return if the test passed or not.
I used the test cases provided in the files sent by Eng. Haytham by mail. The files were authored by Eng. Ahmed Nofal
*/ 

#include <stdio.h>
#include "algorithms.h"

int arr_0[6] = {20,80,10,4,7,1};
int arr_1[6] = {10,19,12,11,80,300};
int arr_2[6] = {2,4, 7, 3,10,0};
int arr_3[6] = {200,800,100,40,70,10};
int arr_4[6] = {100,190,120,110,800,3000};
//int arr_5[6] = {1000,1900,1200,1100,8000,30000};

void arr_print(int *arr, int arr_size)
{
	int counter;
	for (counter = 0; counter < arr_size; counter++)
	{
		printf("The %d Element in Array is %d\n", counter, arr[counter]);
	}
}
int main ()
{
	int arr_size_0 = MAX_ARR_SIZE;
	int arr_size_1 = MAX_ARR_SIZE;
	int arr_size_2 = MAX_ARR_SIZE;
	int arr_size_3 = MAX_ARR_SIZE;
	int arr_size_4 = MAX_ARR_SIZE;
	//int arr_size_5 = (sizeof(arr_5)) / (sizeof(arr_5[0]));
	
	
	int binary_result = binary_search(arr_0, arr_size_0, 7);
	printf("Binary result for arr_0 is %d\n", binary_result);
	arr_print(arr_0, arr_size_0);
	
	
	int linear_result = linear_search(arr_1, arr_size_1, 80);
	printf("Linear result for arr_1 is %d\n", linear_result);
	arr_print(arr_1, arr_size_1);
	
	
	printf("Bubble Sort function for arr_2\n");
	bubble_sort (arr_2, arr_size_2);
	arr_print (arr_2, arr_size_2);
	
	
	printf("Selection Sort function for arr_3\n");
	selection_sort(arr_3, arr_size_3);
	arr_print (arr_3, arr_size_3);
	
	
	printf("Merge Sort function for arr_4\n");
	merge(arr_4, arr_4[0], arr_4[2], arr_4[5]);
	arr_print (arr_4, arr_size_4);
	return 0;
}