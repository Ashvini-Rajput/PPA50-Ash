#include<stdio.h>

int main ()
{
    
    char ch = 'A';
    int i = 11;
    float f = 90.89;
    double d = 90.7865;
    
    int Arr [5];      // 20 byte
    double Brr[5];    // 40 byte
    float Crr [5];    // 20 byte
    char Drr [5];     // 5 byte

    printf("%d\n", sizeof(ch));
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(d));

    printf("%d\n", sizeof(Arr));
    printf("%d\n", sizeof(Brr));
    printf("%d\n", sizeof(Crr));
    printf("%d\n", sizeof(Drr));
    return 0;
}