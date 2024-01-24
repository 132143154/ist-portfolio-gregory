#include <stdio.h>

int main()
{
     int age;
     float gpa;
     char grade;

     printf("Please enter your age: ");
     scanf("%i", &age);       // 15\n3.14\nA\n
     fflush(stdin);
     printf("Please enter your gpa: ");
     scanf(" %f", &gpa);
     printf("Please enter letter grade: ");
     scanf(" %c", &grade);
     
     printf("age = %i, gpa = %f, grade = %c\n",age,gpa,grade);

     return 0;
}
