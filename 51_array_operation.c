#include <stdio.h>
int arr[100];
int n = 0;
void createArray()
{
    int i;
    if (n == 0)
    {
        printf("enter array size : ");
        scanf("%d", &n);
        printf("\nenter array element : \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("create array succefully\n\n");
    }
    else
    {
        printf("\narray is already created \n\n");
    }
}
void displayArray()
{
    int i;
    if (n > 0)
    {
        printf("\narray element are : \n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n\n");
    }
    else
    {
        printf("\nfirst create array then display\n\n");
    }
}
void updateArray()
{
    if (n > 0)
    {
        int pos;
        printf("enter pos : ");
        scanf("%d", &pos);
        if (pos >= 0 && pos < n)
        {
            int value;
            printf("enter value : ");
            scanf("%d", &value);
            arr[pos] = value;
            printf("\nupdate array succefully \n\n");
        }
        else
        {
            printf("\ninvalid position number\n\n");
        }
    }
    else
    {
        printf("\nfirst create array then update\n\n");
    }
}
void insertArray()
{
    if (n > 0)
    {
        int pos;
        printf("enter position : ");
        scanf("%d", &pos);        //
        if (pos >= 0 && pos <= n) // 5
        {
            int value;
            printf("enter value : ");
            scanf("%d", &value);
            int i;
            // pos=2
            // value= 400
            // 12 34 56 78 90    4
            if (pos == n - 1)
            {
                arr[n] = arr[n - 1];
                arr[n - 1] = value;
                n++;
                printf("\ninsert succefully\n\n");
                return;
            }
            //                    1
            for (i = n; i > pos; i--) // i=2
            {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;
            printf("\ninsert succefully\n\n");
        }
        else
        {
            printf("\ninvalid position number\n\n");
        }
    }
    else
    {
        printf("\nfirst create array then insert\n\n");
    }
}
int main()
{
    int num;
    while (1)
    {
        printf("perform array operation to choose option :\n");
        printf("1 . create array \n");
        printf("2 . display array \n");
        printf("3 . update array \n");
        printf("4 . insert array \n");
        printf("5 . delete array \n");
        printf("6 . exit  \n");
        printf("press num : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            createArray();
            break;
        case 2:
            displayArray();
            break;
        case 3:
            updateArray();
            break;
        case 4:
            insertArray();
            break;
        case 6:
            return 0;
        default:
            printf("\nwrong input please press 1 to 6\n\n");
        }
    }
    return 0;
}