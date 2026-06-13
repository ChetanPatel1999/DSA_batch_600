// dymanic structure
#include <stdio.h>
#include <stdlib.h>

struct emp
{
    int id;
    float salary;
};

void main()
{
    
    struct emp *ptr = (struct emp *)malloc(sizeof(struct emp));

    ptr->id = 101;
    ptr->salary = 12000;

    printf("emp info : \n");
    printf("id = %d\n", ptr->id);
    printf("salary = %.0f\n", ptr->salary);

    free(ptr);
}