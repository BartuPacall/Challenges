// your name surname and age from user
#include "stdio.h"

int main()
{
    char name[10];
    char surname[10];
    printf("Enter your name and surname:");
    scanf("%s %s",&name,&surname);
    printf("My name:%s My surname:%s",name,surname);
    return 0;
}
