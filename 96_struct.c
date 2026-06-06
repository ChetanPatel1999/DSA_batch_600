// how to take  struct mouse data from user
#include <stdio.h>
#include <string.h>
struct mouse
{
    char color[12];
    int price;
    float rating;
};

void main()
{
    struct mouse m1, m2, m3;
    printf("size of structure : %d", sizeof(struct mouse));
    printf("enter mouse1 info : \n");
    printf("enter color : ");
    scanf("%s", m1.color);
    printf("enter price : ");
    scanf("%d", &m1.price);
    printf("enter rating : ");
    scanf("%f", &m1.rating);

    printf("enter mouse2 info : \n");
    printf("enter color : ");
    scanf("%s", m2.color);
    printf("enter price : ");
    scanf("%d", &m2.price);
    printf("enter rating : ");
    scanf("%f", &m2.rating);

    printf("\nmouse1 info : \n");
    printf("color : %s\n", m1.color);
    printf("price : %d\n", m1.price);
    printf("rating : %.1f\n\n", m1.rating);

    printf("\nmouse2 info : \n");
    printf("color : %s\n", m2.color);
    printf("price : %d\n", m2.price);
    printf("rating : %.1f\n\n", m2.rating);
}