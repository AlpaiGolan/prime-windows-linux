#include <stdio.h>

int main()
{
  int n, i, flag;

  while (1)
  {
    printf("Enter a positive integer (enter -1 to exit): ");
    scanf("%d", &n);

    // Check if the user wants to exit
    if (n == -1)
      break;

    // Reset flag for each new input
    flag = 0;

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
      flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
      // if n is divisible by i, then n is not prime
      // change flag to 1 for non-prime number
      if (n % i == 0)
      {
        flag = 1;
        break;
      }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
      printf("%d is a prime number.\n", n);
    else
      printf("%d is not a prime number.\n", n);
  }

  return 0;
}
