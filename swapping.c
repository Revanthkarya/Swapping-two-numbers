#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the two numbers(Before swapping):");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number after swapping:\n");
    printf("a=%d b=%d",a,b);
}
getch();
