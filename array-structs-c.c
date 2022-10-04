#include <stdio.h>
#include <string.h>

//typedef char user[25];


struct Student 
{
    char name[12];
    float gpa;

};

int main()
{
    struct Student student1 = {"Mike", 3.4};
    struct Student student2 = {"Michael", 3.8};
    struct Student student3 = {"Saibo", 2.4};
    struct Student student4 = {"Senewa", 3.5};
    struct Student student5 = {"Alvin", 2.8};

    struct Student students[] = {student1, student2, student3, student4, student5};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
   
return 0;
}
