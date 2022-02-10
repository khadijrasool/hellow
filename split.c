#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str1[100];
    char str2[10][10]; 
    int a = 0;
    int b= 0;
    int spl = 0;  
        printf(" Enter  a string : ");
        fgets(str1, sizeof str1, stdin);	
    for(a = 0 ; a <= (strlen(str1)) ; a++)
    {
        if(str1[a] == ' ' || str1[a]  == '\0')
        {
            str2[spl][b]= '\0';
            spl++; 
            b = 0;    
        }
        else
        {
            str2[spl][b] = str1[a];
            b++;
        }
    }
    printf(" String after split by space :\n");
    for(a = 0 ; a < spl ;a ++)
        printf(" %s\n",str2[a]);
    return 0;
}
