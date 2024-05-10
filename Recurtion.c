#include<stdio.h>
void Display(int No)   //caller
{
    int icnt = 0;
    while (icnt<No)
    {
        printf("jay ganesh...\n");
        icnt++;
    }
}
int main()           //caller
{
    Display(4);
    return 0;
}