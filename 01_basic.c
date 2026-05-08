#include <stdio.h>
void main()
{
    int age;
    float height;
    char ch;
    printf("enter age : ");
    scanf("%d", &age); // 67
    printf("age = %d", age);

    printf("\nenter height : ");
    scanf("%f", &height); // 6.8
    printf("height = %.1f", height);

    printf("\nenter a char : ");
    getchar();
    ch = getchar();
    printf("character : %c", ch);
}