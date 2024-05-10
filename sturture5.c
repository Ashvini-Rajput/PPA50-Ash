#include<stdio.h>

struct Demo
{
    int *p;
    float *q;
};
int main()
{
    struct Demo Obj;

    int no = 11;
    float f = 90.89;

    Obj.p = &no;
    Obj.q = &f;
    printf("%d\n",(Obj.p));
    printf("%f\n",(Obj.q));
}

