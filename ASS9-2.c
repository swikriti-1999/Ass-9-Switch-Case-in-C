#include<stdio.h>
int main()
{
    int n,a=5,b=5;

    printf("\na. Addition");
    printf("\na. Substraction");
    printf("\na. Multiplication");
    printf("\na. Division");
    printf("\na. Exit");
    printf("\n Enter your choice accordinly");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
           printf("%d",a+b); 
        break;
    case 2:
           printf("%d",a-b); 
        break;
    case 3:
           printf("%d",a*b); 
        break;
    case 4:
           printf("%d",a/b); 
        break;
    case 5:
           printf("%d",a+b); 
        break;
    
    default:
            printf("exit");
        break;
    }

}