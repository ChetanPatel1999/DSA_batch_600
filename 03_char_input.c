#include <stdio.h>
void main()
{
    char ch1, ch2;
    printf("enter ch1 : ");
    scanf("%c", &ch1); // t
    printf("enter ch2 : ");
    getchar();
    scanf("%c", &ch2);

    printf("ch1 = %c\n", ch1);
    printf("ch2 = %c\n", ch2);
}