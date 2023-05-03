//Compair A, B, C which is greater Using (IF ELSE)


#include<stdio.h>
#include<conio.h>
void main()
{
    char a,b,c;
    if (a>=b) 
        if (a>c) printf("a is greater");
        else printf("c is greater");
    else 
        if (b>c) printf("b is greater");
        else printf("c is greater");
    getch();
}
