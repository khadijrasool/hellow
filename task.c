#include <stdio.h>
int main()
{
    int a , b ;
    printf("Enter the value of a:");
    scanf("%d" , &a);

     printf("Enter the value of b:");
    scanf("%d" , &b);
    if((b % a)== 0) // if remainder is 0 than  
    {
        printf("multiplied: \n");
    }
    else { // if remainder is not 0
        printf("not multiplied: ");
    }
}
