#include <stdio.h>
#include <string.h>

struct mouse
{
    char name[12];
    char color[12];
    int price;
    float rating;
};
void displayMouse(struct mouse m)
{
    printf("mouse info : \n");
    printf("name : %s\n", m.name);
    printf("color : %s\n", m.color);
    printf("price : %d\n", m.price);
    printf("rating : %.1f\n\n", m.rating);
}

void setMouse(char n[20], char c[20], int p, float r, struct mouse *m)
{
    strcpy((*m).name, n);
    strcpy((*m).color, c);
    (*m).price = p;
    m->rating = r;
}

void main()
{
    struct mouse m1, m2, m3;

    setMouse("hp", "black", 300, 4.5, &m1);
    setMouse("frontech", "red", 500, 5.0, &m2);

    // strcpy(m1.name, "hp");
    // strcpy(m1.color, "black");
    // m1.price = 300;
    // m1.rating = 4.5;

    // strcpy(m2.name, "frontech");
    // strcpy(m2.color, "lightblue");
    // m2.price = 1000;
    // m2.rating = 5.0;

    displayMouse(m1);
    displayMouse(m2);
}