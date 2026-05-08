#include <stdio.h>
void main()
{
      int age;
      age = 45;
      short int h = 100;
      printf("a = %d \n", age);
      printf("a = %d \n", &age);
      printf("h = %d \n", h);
      printf("h = %d \n", &h);
      printf("size of int = %d\n", sizeof(age));
      printf("size of int = %d\n", sizeof(int));
      printf("size of char = %d\n", sizeof(char));
      printf("size of float = %d\n", sizeof(float));
      printf("size of short int = %d\n", sizeof(short int));
      printf("size of short int = %d\n", sizeof(h));
      printf("size of double= %d\n", sizeof(double));

      // printf("a = %p \n", &age);  // use %p  formate specifier to display address
}