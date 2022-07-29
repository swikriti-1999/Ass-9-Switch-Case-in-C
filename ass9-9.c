#include<stdio.h>
int main()
{
    int n;
    printf("\n enter a number ");
    scanf("%d",&n);
    switch (n%2)
    {
    case 0: 
        printf("\n upper nearesr odd number is %d",n+1);
        break;
    case 1:
        printf("\n number is %d",n);
        break;
    
    default:
        printf("\n invalid input");
        break;
    }
return 0;
}