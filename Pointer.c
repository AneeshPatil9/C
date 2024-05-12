#include <stdio.h>

void main()
{
    float *a,*r,*p;
    p=(float*)malloc(sizeof(int));
    r=(float*)malloc(sizeof(int));
    a=(float*)malloc(sizeof(int));
    printf("Enter the radius : ");
    scanf("%f",r);
    *a=3.14*(*r)*(*r);
    *p=2*3.14*(*r);
    printf("Perimeter of circle=%f",*p);
    printf("\nArea of circle=%f",*a);
}
