// how take string from user
#include <stdio.h>
void main()
{
    char ch[20];
    printf("enter a string : ");
    // scanf("%s", &ch[0]);
    scanf("%s", ch);

    printf("ch = %s\n", ch);
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        printf("%c  ", ch[i]);
    }
}