#include <stdio.h>
int main() {
    int n, num, remainder, result = 0;
    printf("Enter a integer: ");
    scanf("%d", &n);
    num = n;

    while (num != 0) 
	{
	        remainder = num % 10;
        
       result += remainder * remainder * remainder;
        
       num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}
