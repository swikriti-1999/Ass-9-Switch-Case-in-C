#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number of a week");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("\n Monday \n START UR DAY WITH POSITIVE MIND");
        break;
    case 2:
        printf("\n Tuesday \n POSITIVE THOUGHT MAKES UR DAY PERFECT");
        break;
    case 3:
        printf("\n Wednesday \n DON'T GIVE UP");
        break;
    case 4:
        printf("\n Thursday \n KEEP SMILING");
        break;
    case 5:
        printf("\n Friday \n HAVE FAITH ON UR SELF");
        break;
    case 6:
        printf("\n Saturday \n ALWAYS BE HAPPY");
        break;
    case 7:
        printf("\n Sunday \n ENJOY UR DAY");
        break;
    

    
    default:
        printf("\n wrong input");
        break;
    }
return 0;
}