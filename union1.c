#include<stdio.h>

#pragma pack(1)
struct Demo

{

    int no;    //4
    float f;   //4
    int data;  //4
    char c;    //1
};
union Hello
{
    int no;     //4
    float f;    //4
    int data;   //4
    char c;     //1

};

 int main()

{
struct Demo dobj;
union Hello hobj;
printf("Size of structure is :%d\n",sizeof(dobj));  //13
printf("Size of structure is :%d\n",sizeof(hobj));  //4

hobj.no = 11;                //1
printf("%d\n",hobj.no);

hobj.data = 21;             //21
printf("%d\n",hobj.data);




return 0;
}