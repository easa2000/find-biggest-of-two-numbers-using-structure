// find biggest of three numbers using structure
#include<stdio.h>
#include<conio.h>
void main()
{
    struct numbers{
        int a, b, c;
        int largest;
    }num;

    printf("\n Enter the three numbers: ");
    scanf("%d %d %d", &num.a, &num.b, &num.c);
    if(num.a > num.b && num.a > num.c)
    {
        num.largest = num.a;
    }
    if(num.b > num.a && num.b > num.c)
    {
        num.largest = num.b;
    }
    if(num.c > num.a && num.c > num.b)
    {
        num.largest = num.c;
    }

    printf("\n The largest number is: %d",num.largest);

}
