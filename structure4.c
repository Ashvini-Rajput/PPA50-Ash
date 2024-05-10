#include<stdio.h>
#pragma pack(4)
struct student 
{
int RollNo;
char Division;
int Age;
float Marks;
int Salary;

};

int main()
{
    struct student Amit;
    printf("size of object is:%d\n",sizeof(Amit));

    return 0;
}
