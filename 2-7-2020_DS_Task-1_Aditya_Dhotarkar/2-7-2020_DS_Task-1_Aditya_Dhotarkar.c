#include<stdio.h>
struct stud_data
{
    int id;
    char name[20];
    int year;
    float cgpa;
};

int main()
{
    struct stud_data s[5];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter %d Student Information",&i);
        printf("\nEnter Students id : ");
        scanf("%d",&s[i].id);
        printf("\nEnter Students Name : ");
        scanf("%s",s[i].name);
        printf("\nEnter Students year :");
        scanf("%d",&s[i].year);
        printf("\nEnter Students CGPA :");
        scanf("%f\n",&s[i].cgpa);
    }

    for(i=0;i<4;i++)
    {
        printf("Name : %s\n",s[i].name);
        printf("ID : %d\n",s[i].id);
        printf("Year : %d\n",s[i].year);
        printf("CGPA : %f\n",s[i].cgpa);
    }
    return 0;
}