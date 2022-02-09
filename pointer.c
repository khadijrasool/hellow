#include <stdio.h>
#include <string.h>
int addnumber(int *a, int *b) // store adress
{
    int sum;
    sum = *a + *b;
    return sum;
}
int main()

{

    /*
    int m = 5, n , o;
    int *z = &m;
    printf(" z stores the address of m  = %d\n",  z);
    printf("\n *z stores the value of m = %d\n",   *z);
    printf("\n &m is the address of m = %d\n",   &m);
    printf(" &n stores the address of n = %d\n",   &n);
    printf(" &o  stores the address of o = %d\n",   &o);
    printf(" &z stores the address of z = %d\n", &z);
                            */
   

   /*
    int m = 29;
    int *kd;

    printf("The value of m is : %d \n", m);
    printf("adress of m is : %d\n", &m);

    kd = &m;   // address is assign to variable kd
    printf("address of kd: %d\n", &kd); // print address of variable kd 
    printf("value of kd: %d\n", *kd); // * means it will get value of m
    *kd = 8;
    printf("address of m : %d\n ,", &m);
    printf("value of m : %d \n ", m); // m has assign to *kd so it will get the value of *kd 
  

  */



    /*
    // adding two numbers through pointers.

    int a , b , *ptr1 , *ptr2, sum  ;
    printf("Enter the first number:");
    scanf("%d" , &a); // address of a 
    printf("Enter the second number:");
    scanf("%d" , &b); // address of b 

    ptr1 = &a; // address of a assign to variable 
    ptr2 = &b;

    sum = *ptr1 + *ptr2; // it will go to adrees of a and b and get value 
    printf("sum is %d", sum);

    */

    /*

    //ADDing two number call by refrence

    int k, f , sum;
    printf("enter 1st number :");
    scanf("%d", &k);
    printf("enter 2nd number :");
    scanf("%d", &f);
    sum = addnumber(&k, &f);
    printf("sum of %d and %d is %d \n" , k , f , sum);
    */

    /*

    // maximum value

    int a,b,*ptr1=&a,*ptr2=&b;


       printf(" Enter  the 1st no : ");
       scanf("%d", ptr1); //getting adress instead of value
       printf(" Input the 2nd  no : ");
       scanf("%d", ptr2);  //getting adress instead of value


     if(*ptr1<*ptr2) // * means we are comparing the value not address
     {
      printf(" %d is the maximum no:\n", *ptr2); // it will print value
     }
     else
     {
      printf(" %d is the maximum no:\n",*ptr1);
     }
    */

    return 0;
}
