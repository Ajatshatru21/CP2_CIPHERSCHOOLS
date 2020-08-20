#include<stdio.h>
#include<conio.h>

void printMaxOfMin(int arr[], int n)
{
    int k,maxOfMin,i,j;
    for ( k=1; k<=n; k++)
    {

         maxOfMin = INT_MIN;

        for ( i = 0; i <= n-k; i++)
        {
            int min = arr[i];
            for ( j = 1; j < k; j++)
            {
                if (arr[i+j] < min)
                    min = arr[i+j];
            }


            if (min > maxOfMin)
              maxOfMin = min;
        }

        printf("maxOfMin ") ;
    }
}


int main()
{
    int n,arr[10];
    arr[] = {10, 20, 30, 50, 10, 70, 30};
     n = sizeof(arr)/sizeof(arr[0]);
    printMaxOfMin(arr, n);
    return 0;
}



