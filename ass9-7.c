#include <stdio.h>
int main()
{
    float x, amount = 0, total = 0;
    printf("\n enter the number ");
    scanf("%f", &x);
    switch (x <= 50)
    {
    case 1:
        amount = x * 0.5;
        break;
    case 0:
        switch (x <= 150)
        {
        case 1:
            amount = 25 + (x - 50) * 0.75;
            break;
        case 0:
            switch (x <= 250)
            {
            case 1:
                amount = 100 + (x - 250) * 1.20;
                break;
            case 0:
                amount = 220 + (x - 250) * 1.5;
                break;
            }
            break;
        }
        break;
    }
    total=amount+(amount*0.20);
    printf("\n total amount is %f",total);
return 0;
}