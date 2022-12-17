//CLASSİC 3x3 ARRAY SUM

#include<stdio.h>
int main() {
    int arr1[3][3], arr2[3][3], arr3[3][3], i,j,a; //We declared how many elements the arrays.
    
    printf("Enter number a:");
    scanf("%d",&a);
   
    printf("\nEnter 5 numbers of arr1:\n");
    printf("--------------------------------\n");
    for (i = 1; i <= a; i++) {
        for(j=1;j<=a;j++)
        {
        printf("Enter arr1[%d][%d]:",i,j);
        scanf("%d", &arr1[i][j]);
        }
    }
    printf("--------------------------------\n");

    printf("Enter 5 numbers of arr2:\n");
    printf("--------------------------------\n");
    for (i = 1; i <=a; i++) {
        for(j=1;j<=a;j++)
        {
        printf("Enter arr2[%d][%d]:",i,j);
        scanf("%d", &arr2[i][j]);
        }}
    printf("--------------------------------\n");


    for (i = 1; i <=a; i++) {
        for(j=1;j<=a;j++)
        {
        arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Addition of two arrays is:\n");
    printf("--------------------------------\n");
    
        for (i =1; i <= a; i++) {
        for(j=1;j<=a;j++)
        {
        printf("Enter arr3[%d][%d]:%d\n",i,j,arr3[i][j]);
        }
    
    }
   
    return 0;
}

/*
Output:
Enter 5 numbers of arr1:
--------------------------------
Enter arr1[1][1]:1
Enter arr1[1][2]:2
Enter arr1[1][3]:3
Enter arr1[2][1]:4
Enter arr1[2][2]:5
Enter arr1[2][3]:6
Enter arr1[3][1]:7
Enter arr1[3][2]:8
Enter arr1[3][3]:9
--------------------------------
Enter 5 numbers of arr2:
--------------------------------
Enter arr2[1][1]:9
Enter arr2[1][2]:1
Enter arr2[1][3]:2
Enter arr2[2][1]:3
Enter arr2[2][2]:4
Enter arr2[2][3]:5
Enter arr2[3][1]:6
Enter arr2[3][2]:7
Enter arr2[3][3]:8
--------------------------------
Addition of two arrays is:
--------------------------------
Enter arr3[1][1]:10
Enter arr3[1][2]:3
Enter arr3[1][3]:5
Enter arr3[2][1]:7
Enter arr3[2][2]:9
Enter arr3[2][3]:11
Enter arr3[3][1]:13
Enter arr3[3][2]:15
Enter arr3[3][3]:17

*/

// EXAMPLE 2 WİTH MATRİX
#include<stdio.h>
int main() {
    int arr1[3][3], arr2[3][3], arr3[3][3], i,j,a; //We declared how many elements the arrays.
    
    printf("Enter number a:");
    scanf("%d",&a);
   
    printf("\nEnter numbers of arr1:\n");
    printf("--------------------------------\n");
    for (i = 0; i <= a; i++) {
        for(j=0;j<=a;j++)
        {
        printf("Enter arr1[%d][%d]:",i,j);
        scanf("%d", &arr1[i][j]);
        }
    }
    printf("--------------------------------\n");

    printf("Enter numbers of arr2:\n");
    printf("--------------------------------\n");
    for (i=0; i <=a; i++) {
        for(j=0;j<=a;j++)
        {
        printf("Enter arr2[%d][%d]:",i,j);
        scanf("%d", &arr2[i][j]);
        }}
    printf("--------------------------------\n");


    for (i = 0; i <=a; i++) {
        for(j=0;j<=a;j++)
        {
        arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Addition of two arrays is:\n");
    printf("--------------------------------\n");
    
    printf("\nThe matrix is : \n");
    for (i = 0; i <=a; i++) {
        printf("\n");
        for(j=0;j<=a;j++)
        {
        printf("%d\t",arr3[i][j]);
        }
     printf("\n\n");
    
    }
    return 0;
}

/*

Output:
Enter number a:3

Enter numbers of arr1:
--------------------------------
Enter arr1[0][0]:1
Enter arr1[0][1]:2
Enter arr1[0][2]:3
Enter arr1[0][3]:4
Enter arr1[1][0]:5
Enter arr1[1][1]:6
Enter arr1[1][2]:7
Enter arr1[1][3]:8
Enter arr1[2][0]:9
Enter arr1[2][1]:0
Enter arr1[2][2]:1
Enter arr1[2][3]:2
Enter arr1[3][0]:3
Enter arr1[3][1]:4
Enter arr1[3][2]:5
Enter arr1[3][3]:6
--------------------------------
Enter numbers of arr2:
--------------------------------
Enter arr2[0][0]:1
Enter arr2[0][1]:2
Enter arr2[0][2]:3
Enter arr2[0][3]:4
Enter arr2[1][0]:5
Enter arr2[1][1]:6
Enter arr2[1][2]:7
Enter arr2[1][3]:8
Enter arr2[2][0]:1
Enter arr2[2][1]:2
Enter arr2[2][2]:3
Enter arr2[2][3]:4
Enter arr2[3][0]:5
Enter arr2[3][1]:6
Enter arr2[3][2]:7
Enter arr2[3][3]:8
--------------------------------
Addition of two arrays is:
--------------------------------

The matrix is : 

2       4       6       10


10      12      14      10


10      2       4       8


8       10      12      3


*/






