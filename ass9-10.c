#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,x,y,i,r1,r2,img1,img2;
    printf("\n enter the value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    switch (d>0)
    {
    case 1:
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("\n roots are real nd distinct");
        printf("\n roots are %d and %d",x,y);
        break;
    case 0:
        switch (d==0)
        {
        case 0:
            x=(-b+sqrt(d))/(2*a);
            y=(-b-sqrt(d))/(2*a);
            printf("\n roots are real and equal");
            printf("\n roots are %d and %d",x,y);
            break;
        case 1:
            switch (d<0)
            {
            case 1:
                r1=-b/(2*a);
                img1=sqrt(d)/(2*a);
                r2=-b/(2*a);
                img2=-sqrt(d)/(2*a);
                printf("\n roots are real nd distinct");
                printf("\n roots are %d%d and %d%d",r1,img1,r2,img2);
                break;
            case 0:
                break;
            
            }
            break;
        }
    
    default:
        printf("\n invalid input");
        break;
    }
return 0;
}