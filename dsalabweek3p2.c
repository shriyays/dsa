/*Create  an  Employee  with  the  following  fields 
–SSN,  Name,  Dept,  Designations,  Salary,  Phone  no,  Age. 
Every employee should work in a department and department should have a name and number associated with it.

1.Delete all the employees whose age is greater than 58
2.Display the details of all employees who work in particular department
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct emp
{
    struct emp *prev;

    char ssn[10];
    char name[20];
    char dept[20]; // MANAGER-1 HR-2 ENGINEERING-3 MARKETING-4 PLANNING-5 SALES-6
    char des[200];
    int sal;
    char pno[10];
    int age;

    struct emp *next;

}emp_t;

void create()
{
    ;
}

void display()
{
    ;

}

void delete()
{
    ;
}
