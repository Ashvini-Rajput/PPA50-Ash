#include<stdio.h>

int main ()
{
    
    char ch = 'A';
    int i = 11;
    float f = 90.89;
    double d = 90.7865;

    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(d));
    return 0;
}