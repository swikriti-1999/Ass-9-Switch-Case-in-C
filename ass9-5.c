#include<stdio.h>
int main()
{
    int n;
    printf("\n enter any number ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("\n Good");
        break;
    case 2:
        printf("\n Better");
        break;
    case 3:
        printf("\n best");
        break;
    
    default:
        printf("\n invalid");
        break;
    }
return 0;
}