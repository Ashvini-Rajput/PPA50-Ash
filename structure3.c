#include<stdio.h>
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

    struct student Amit ;
    struct student Aashu ;

    printf("Size of object is\n",sizeof(Amit));

    Amit.RollNo  = 11 ;
    Amit.Division = 'A';
    Amit.Age = 19;
    Amit.Marks = 90.89;
    Amit.Salary = 21000;
    

    Aashu.RollNo  = 21 ;
    Aashu.Division = 'D';
    Aashu.Age = 17;
    Aashu.Marks = 90.89;
    Aashu.Salary = 50000; 

    printf("Age of  Amit is:%d \n",Amit.Age);
    printf("Age of  Amit is:%d \n",Amit.Salary);

    printf("Age of  Aashu is:%d \n",Aashu. Age);
    printf("Age of  Aashu is:%d \n",Aashu.Salary);


    return 0;
}
