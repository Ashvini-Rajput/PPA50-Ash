#include<stdio.h>
int main(){

float arr[] = {10.3,43.4,45.34,234.45};

float *p = NULL;

float *q= NULL;

p = arr;
q = &(arr[3]);

printf("\n%d",p);
printf("\n%d",q);
printf("\n%f", *q);
printf("\n%f", *p);
printf("\n%f",*(p+2));
printf("\n%f",*(p+1));
printf("\n%f",p[1]);
printf("\n%f",*(2+arr));
printf("\n%f", 0[arr]);
 printf("\n%f",q-p);
printf("\n%f", (q-2));

return 0;

}