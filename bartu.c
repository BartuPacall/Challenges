// create a pointer

//Pointer uses number and address of number
#include <stdio.h>
int main()
{
   int *pc,c;
   
   printf("Enter value of c:"); //for example 19
   scanf("%d",&c);
   
   printf("Address of c: %p\n", &c); // 0061FF18 this is memory address of 19.
   printf("Value of c: %d\n\n", c);  //19
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc); // we used pc instead of &c.
   printf("Content of pointer pc: %d\n\n", *pc); // 19 and we used *pc instead of c.
   
   c = 13;
   printf("Address of pointer pc: %p\n", pc); // Memory adress didn't change anywhere.
   printf("Content of pointer pc: %d\n\n", *pc); // we wrote 13 instead of 19.
   
   *pc = 53;
   printf("Address of c: %p\n", &c); 
   printf("Value of c: %d\n\n", c); // 53
   return 0;
}
/*
Output:Enter value of c:19
Address of c: 0061FF18
Value of c: 19

Address of pointer pc: 0061FF18
Content of pointer pc: 19

Address of pointer pc: 0061FF18
Content of pointer pc: 11

Address of c: 0061FF18
Value of c: 2
*/


//REVERSE ARRAY-ARRAY WİTH POİNTER(From My Half Codes Repository) 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, *arrays, i;
    printf("Enter number:");
    scanf("%d", &number);
    arrays = (int*) malloc(number * sizeof(int));
    for(i = 0; i < number; i++) {
        scanf("%d", arrays + i);
    }

    for(i = number-1; i>=0; i--)
    {
        printf("%d|", arrays[i]);
        
    }
    printf("\n");
    for(i = 0; i < number; i++)
        printf("%d|", *(arrays + i));
    return 0;
}

/*
Output:
Enter number:3 
11
12
13
13|12|11|
11|12|13|
*/

// Alphabet Range
#include <stdio.h>

int main(void)
{
char *pa, pb;
pa = &pb;
char a,b;


printf("Enter character a and b:");
scanf("%c %c",&a,&b);

  for (pb=a; pb<b; pb++) 
  {
    printf("%c ", *pa);
  }
  return 0;
}

/*
Output:
Enter character a and b:A T
A B C D E F G H I J K L M N O P Q R S
*/

//Four operations with pointer

#include <stdio.h>
int main()
{
   int num1, num2, *ptr, *tpr, sum,div,sub,mult;
   
   printf("\n\n Two number Addition Multiplication Division Subtraction:\n"); 
   printf("--------------------------------\n");   
 
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);   
  
 
   ptr = &num1;
   tpr = &num2;
 
   sum = *ptr + *tpr;
   sub= *ptr - *tpr;
   div= *ptr/ *tpr;
   mult= *ptr * *tpr;
 
  
   printf("--------------------------------\n");
  
   printf("Addition of entered numbers:%d\n\n",sum);
   printf("Division of entered numbers:%d\n\n",div);
   printf("Subtraction of entered numbers:%d\n\n",sub);
   printf("Multiplication of entered numbers:%d\n\n",mult);
  
   printf("--------------------------------\n");
 
   return 0;
}
/* Output:
--------------------------------
Enter first number: 13
Enter second number: 17
--------------------------------
Sum of entered numbers:30

Div of entered numbers:0

Sub of entered numbers:-4

Mult of entered numbers:221
*/







