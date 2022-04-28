#include <iostream>
#include <stdlib.h>
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void print(int arrnumbers[], int sizeofarray)
{
	int i;
	for (i = 0; i < sizeofarray; i++)
		printf("%d ", arrnumbers[i]);
}
// This is an optimised code for the bubble sort
void bSort(int arrnumbers[], int n)
{
	int i, j;
	bool check;
	for (i = 0; i < n - 1; i++)
	{
		check = false;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arrnumbers[j] > arrnumbers[j + 1])
			{
				swap(&arrnumbers[j], &arrnumbers[j + 1]);
				printf("   \n");
				print(arrnumbers, n);	
				check = true;
			}
		}
		// We are breaking from the loop in case two elements were not swapped by inner loop.
		if (check == false)
			break;
	}
}
// This the main program from where the execution will start
int main()
{
		for (int k = 0; k < 15; k++) {
		int arrnumbers[] = {rand()%15,-k * k, rand() % 10,rand() * 2, k / 3 * k / 2};
		int n = sizeof(arrnumbers) / sizeof(arrnumbers[0]);
		bSort(arrnumbers, n);
		printf("\n"); 
		printf("Sorted array: \n");
		print(arrnumbers, n);
		printf("   \n");
		printf("   \n");
		printf("   \n");
	}
					return 0;
}

