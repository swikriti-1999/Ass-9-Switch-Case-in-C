#include<stdio.h>
int main()
{
    int n;
    printf("\n enter a number ");
    scanf("%d",&n);
    switch (n%100==0)
    {
    case 1:
            switch (n%400==0)
            {
            case 1: 
                printf("\n leap year");
                break;
            
            case 0:
                printf("\n non leap year");
                break;
            }
    case 0:
        switch (n%4==0)
        {
        case 1:
            printf("\n leap year");
            break;
        case 0:
            printf("\n non leap year");
            break;
        }
        break;
    }
return 0;
}