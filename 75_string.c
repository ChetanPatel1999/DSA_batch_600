// wap to count vovles and consonent in string.
#include <stdio.h>
void main()
{
    char data[100] = "indor89e city is a clea#n city67";
    int i, v = 0, c = 0;
    printf("data = %s\n", data);
    for (i = 0; data[i] != '\0'; i++) //
    {
        if (data[i] >= 'a' && data[i] <= 'z')
        {
            if (data[i] == 'a' || data[i] == 'e' || data[i] == 'i' || data[i] == 'o' || data[i] == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("total vovel count in string : %d", v);
    printf("\ntotal consonent count in string : %d", c);
}