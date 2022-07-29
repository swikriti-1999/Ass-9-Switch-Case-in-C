#include <stdio.h>
int main()
{
    int a, b, c, n;
    printf("\na. to check triangle is isosceles or not");
    printf("\nb. to check triangle is right angled or not");
    printf("\nc. to check triangle is equilateral or not");
    printf("\nd. Exit");

    printf("\nEnter the number u want to find for accordingly");
    scanf("%d", &n);
    printf("\n enter lenth of triangle of side a,b,c");
    scanf("%d %d %d", &a, &b, &c);

 
    switch (n)
    {
    case 1:

        if (a == b || b == c || c == a)
            printf("\n triangle is isosceles ");
        else
            printf("\n not isosceles");
        break;
    case 2:
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            printf("\n its a right angle triangle");
        else
            printf("\n its not a right angle triangle");
            break;
    case 3:
        if (a == b && b == c && c == a)
            printf("\n equilateral triangle");
        else
            printf("\n not an equilateral traingle");
            break;
    default:
        printf("\n wrong input");
        break;
    }
    return 0;
}