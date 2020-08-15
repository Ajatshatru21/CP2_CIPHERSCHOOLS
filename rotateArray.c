#include <stdio.h>

void rightRotate(int A[], int k, int n)
{

	int aux[k],i;
	for (int i = 0; i < k; i++)
		aux[i] = A[n-k+i];

	for (int i = n-k-1; i >= 0; i--)
		A[i+k] = A[i];

	for (int i = 0; i < k; i++)
		A[i] = aux[i];
}

int main(void)
{
	int A[] = { 1, 2, 3, 4, 5, 6, 7 };
	int k = 3;

	int n = sizeof(A)/sizeof(A[0]);

	rightRotate(A, k, n);

	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);

	return 0;
}
