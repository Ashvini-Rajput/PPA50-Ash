#include<stdio.h>
int main()
{
char ch = ‘A’; // Consider address of ch as 100
char *p = &ch; // Consider address of p as 200
char **q = &p; // Consider address of q as 300
char **x = &p; // Consider address of x as 400
char *y = &ch; // Consider address of y as 500
printf(“%d”,&ch);
printf(“%d”,p);
printf(“%d”,&p);
printf(“%d”,&q);
printf(“%d”,d);
printf(“%c”,**x);
printf(“%c”,**q);
printf(“%d”,*q);
return 0;
}
