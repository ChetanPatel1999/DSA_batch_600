// pointer to structure array
#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    float salary;
};

void main()
{
    struct emp *ptr = (struct emp *)malloc(3 * sizeof(struct emp));

    struct emp *temp = ptr;

    ptr->id = 101;
    ptr->salary = 1200;

    ptr++; // 1708

    ptr->id = 102;
    ptr->salary = 1600;

    ptr++; // 1716

    ptr->id = 103;
    ptr->salary = 1800;

    int i;
    ptr = temp;
    for (i = 0; i < 3; i++) // 1
    {
        printf("emp info : \n");
        printf("id = %d\n", ptr->id);
        printf("salary = %.0f\n", ptr->salary);
        ptr++;
    }
}