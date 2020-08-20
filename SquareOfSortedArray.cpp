#include<stdio.h>
#include<conio.h>
void sortSquares(int arr[], int n)
{
int i;
	for ( i = 0 ; i < n ; i++)
		arr[i] = arr[i] * arr[i];

	sort(arr, arr+n);
}


int main()
{
    int arr[10],n,i;
	 arr[] = {-4,-1,0,3,10 };
	 n = sizeof(arr)/sizeof(arr[0]);
printf("Before sort \n");
	for ( i = 0; i < n; i++)
		printf(arr[i]) ;
	sortSquares(arr, n);

	printf("\nAfter Sort \n");
	for ( i = 0 ; i < n ; i++)
		printf( arr[i]);

	return 0;
}

