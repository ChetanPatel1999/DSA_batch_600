#include <stdio.h>
#include <string.h>
struct mouse
{
    char name[12];
    char color[12];
    int price;
    float rating;
};

void main()
{
    struct mouse m1, m2, m3;

    strcpy(m1.name, "hp");
    strcpy(m1.color, "black");
    m1.price = 300;
    m1.rating = 4.5;

    strcpy(m2.name, "frontech");
    strcpy(m2.color, "lightblue");
    m2.price = 1000;
    m2.rating = 5.0;

    printf("mouse1 info : \n");
    printf("name : %s\n", m1.name);
    printf("color : %s\n", m1.color);
    printf("price : %d\n", m1.price);
    printf("rating : %.1f\n\n", m1.rating);

    printf("mouse2 info : \n");
    printf("name : %s\n", m2.name);
    printf("color : %s\n", m2.color);
    printf("price : %d\n", m2.price);
    printf("rating : %.1f\n", m2.rating);
}