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
    int n;
    printf("enter emp count : ");
    scanf("%d", &n);
    struct emp *ptr = (struct emp *)malloc(n * sizeof(struct emp));

    struct emp *temp = ptr;
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nenter emp info : \n");
        printf("enter id : ");
        scanf("%d", &ptr->id);
        printf("enter salary : ");
        scanf("%f", &ptr->salary);
        ptr++;
    }

    ptr = temp;
    for (i = 0; i < n; i++) // 1
    {
        printf("\nemp info : \n");
        printf("id = %d\n", ptr->id);
        printf("salary = %.0f\n", ptr->salary);

        ptr++;
    }

    ptr = temp;
    free(ptr);
}