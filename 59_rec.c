#include <stdio.h>
// without recursion
//  int factorial(int num)
//  {
//      int fact = 1, i;
//      for (i = 1; i <= num; i++) // 6
//      {
//          fact = fact * i; // 120
//      }
//      return fact;
//  }

// int factorial(int num)
// {
//     int fact = 1, i;
//     for (i = num; i > 0; i--) // 0
//     {
//         fact = fact * i; // 120
//     }
//     return fact;
// }

// int factorial(int num)
// {
//     static int fact = 1, i = 1;
//     fact = fact * i; // 120
//     i++;             // 6
//     if (i <= num)
//     {
//         factorial(num);
//     }
//     return fact;
// }

int factorial(int num)
{
    static int fact = 1;
    fact = fact * num; //120
    num--;  // 0          
    if (num > 0)
    {
        factorial(num);
    }
    return fact;
}

void main()
{
    printf("factorial = %d\n", factorial(5));
    // printf("factorial = %d\n", factorial(4));
    // printf("factorial = %d\n", factorial(6));
}