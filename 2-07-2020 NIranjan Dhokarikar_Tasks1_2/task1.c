# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct student
{
    int year;
    float cgpa;
    int id;
    char name[100];
}s1,s2,s3,s4;

int main()
{
    printf("\n\nStudent Details:");


    scanf("%d",&s1.year);
    scanf("%d",&s1.id);
    scanf("%f",&s1.cgpa);
    scanf("%s",&s1.name);

    printf("\n\n");


    scanf("%d",&s2.year);
    scanf("%d",&s2.id);
    scanf("%f",&s2.cgpa);
    scanf("%s",&s2.name);

    printf("\n\n");

    scanf("%d",&s3.year);
    scanf("%d",&s3.id);
    scanf("%f",&s3.cgpa);
    scanf("%s",&s3.name);

    printf("\n\n");

    scanf("%d",&s4.year);
    scanf("%d",&s4.id);
    scanf("%f",&s4.cgpa);
    scanf("%s",&s4.name);

    printf("\n\n");

    printf("Student 1: ");

    printf("\nName: %s",s1.name);
    printf("\nYear: %d",s1.year);
    printf("\nI.D: %d ",s1.id);
    printf("\nC.G.P.A: %f ",s1.cgpa);

    printf("\n\n");

    printf("Student 2: ");

    printf("\nName: %s",s2.name);
    printf("\nYear: %d",s2.year);
    printf("\nI.D: %d",s2.id);
    printf("\nC.G.P.A: %f",s2.cgpa);

    printf("\n\n");

    printf("Student 3: ");

    printf("\nName: %s",s3.name);
    printf("\nYear: %d",s3.year);
    printf("\nI.D: %d",s3.id);
    printf("\nC.G.P.A: %f",s3.cgpa);

    printf("\n\n");

    printf("Student 4: ");

    printf("\nName: %s",s4.name);
    printf("\nYear: %d",s4.year);
    printf("\nI.D: %d",s4.id);
    printf("\nC.G.P.A: %f",s4.cgpa);

    return 0;
}