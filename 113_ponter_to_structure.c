// pointer to structure
#include <stdio.h>
struct emp
{
    int id;
    float salary;
};

void main()
{
    struct emp e1;
    struct emp *ptr;
    ptr = &e1;

    (*ptr).id = 101;
    (*ptr).salary = 12000;

    printf("emp info : \n");
    printf("id = %d\n", (*ptr).id);
    printf("salary = %.0f\n", (*ptr).salary);
}