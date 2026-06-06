// how to take  struct mouse data from user
#include <stdio.h>
#include <string.h>
struct mouse
{
    char color[12];
    int price;
    float rating;
};
void getColorAbove200Price(struct mouse m[], int n)
{
    int i;
    printf("\nmouse color display which price belove 200 : \n");
    for (i = 0; i < n; i++)
    {
        if (m[i].price <= 200)
        {
            printf("color : %s\n", m[i].color);
        }
    }
}

void getRedColorMouse(struct mouse m[], int n)
{
    int i;
    printf("\nmouse color red color : \n");
    for (i = 0; i < n; i++)
    {
        if (strcmp(m[i].color, "red") == 0)
        {
            printf("\nmouse %d info : \n", i + 1);
            printf("color : %s\n", m[i].color);
            printf("price : %d\n", m[i].price);
            printf("rating : %.1f\n\n", m[i].rating);
        }
    }
}
void main()
{
    struct mouse m[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("enter mouse %d info : \n", i + 1);
        printf("enter color : ");
        scanf("%s", m[i].color);
        printf("enter price : ");
        scanf("%d", &m[i].price);
        printf("enter rating : ");
        scanf("%f", &m[i].rating);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nmouse %d info : \n", i + 1);
        printf("color : %s\n", m[i].color);
        printf("price : %d\n", m[i].price);
        printf("rating : %.1f\n\n", m[i].rating);
    }

    // getColorAbove200Price(m, 3);

    getRedColorMouse(m, 3);
}