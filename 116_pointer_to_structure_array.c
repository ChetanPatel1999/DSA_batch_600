// pointer to structure array
#include <stdio.h>
struct emp
{
    int id;
    float salary;
};

void main()
{
    struct emp employs[3];
    struct emp *ptr;
    ptr = employs; // 1700

    ptr->id = 101;
    ptr->salary = 1200;

    ptr++; // 1708

    ptr->id = 102;
    ptr->salary = 1600;

    ptr++; // 1716

    ptr->id = 103;
    ptr->salary = 1800;

    int i;
    ptr = employs;
    for (i = 0; i < 3; i++) // 1
    {
        printf("emp info : \n");
        printf("id = %d\n", ptr->id);
        printf("salary = %.0f\n", ptr->salary);
        ptr++;
    }
}