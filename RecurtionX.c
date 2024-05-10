#include<stdio.h>
void Display(int No)   //caller
{
     static int icnt = 0;
    if (icnt<No)
    {
        printf("jay ganesh...\n");
        icnt++;
        Display(No); //Recursive call 
    }
}
int main()           //caller
{
    Display(4);
    return 0;
}