#include<stdio.h>

#pragma pack(1)
struct Demo

{

    int no;
    float f;
    int data;
    char c;
};

 int main()

{
struct Demo dobj;
printf("Size of structure is :%d\n",sizeof(dobj)); //13


return 0;
}