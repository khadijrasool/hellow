#include <stdio.h>
#include <stdio.h>
#include <string.h>
int main()
{

    char ch;
    int n;

    do
    {
        printf("Enter the value of N greater than 10 :");
        scanf("%d", &n);
        printf("entered value is %d \n ", n);
        printf("Enter e for Even (divisible by 2) \n");
        printf("Enter o for odd (divisible by 5) \n");
        printf("Enter x for Exit \n");
        scanf("%c", &ch);
        if (n > 10)
        {

            switch (ch)
            {
            case 'e':
                printf("\n Even number divisible by 2 \n ");
                for (int i = 1; i < n; i++)
                {
                    if (i % 2 == 0)
                    {
                        printf("%d \n", i);
                    }
                }
                break;
            case 'o':
                printf("\n odd number divisible by 5 \n");
                for (int i = 1; i < n; i++)
                {
                    if (i % 2 != 0 && i % 5 == 0)
                    {
                        printf("%d \n ", i);
                    }
                }
                break;
            case 'x':
                printf("Exit");
            deafult:
                printf("\n wrong input :");
                break;
            }
        }
        else
        {
            printf("Number is less than 10 \n");
        }
    } while (ch != 'x');
    return 0;
}
