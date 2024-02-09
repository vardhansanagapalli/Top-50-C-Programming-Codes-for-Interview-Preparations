// Student Data

#include <stdio.h>
#include <math.h>
int main()
{
    char name[20];
    int age;
    float CGPA;
    char grade;
    scanf("%s %d %f %c", &name, &age, &CGPA, &grade);
    float c = floor(CGPA * 100) / 100;
    printf("Name: %s", name);
    printf("\nAge: %d", age);
    printf("\nCGPA: %.2f", c);
    printf("\nGrade: %c", grade);
}