#include<stdio.h>
int main()
{
    int n;
    printf("\n enter a number ");
    scanf("%d",&n);
    switch (n>0)
    {
    case 0:
        n=-1*n;
        printf("\n number converted to negative number %d",n);
        break;
    case 1:
        n=-1*n;
        printf("\n number converted to positive number %d",n);
        break;
    
    default:
        printf("\n invalid input");
        break;
    }
return 0;
}