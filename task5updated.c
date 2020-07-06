# include <stdio.h>
# include <stdlib.h>
# include <string.h>

//void display();

struct student
{
    int roll_no;
    char name[1000];

};

struct Queue
{
    char data[30][100];
    int front,rear,count;

    int roll[100];
    
    struct student s1;
};

void initialise(struct Queue *q)
{
    q->front = 0;
    q->rear = 0;
    q->count = 0;
}

void enqueue(struct Queue *q, char * a ,int ele)
{
    strcpy(q->data[q->rear++],a);
    q->roll[q->count++] = ele;
    
}

void print(struct Queue* q)
{
    int b;
    struct student stu;
    printf("\n\nTHE STUDENTS ARE:\n\n");
    
    for(int i=q->front;i<q->rear;i++)
    {
        printf("Name: ");
        printf("%s",q->data[i]);
        printf("\n");
        printf("\nRoll no: ");
        printf("%d",q->roll[i]);
        printf("\n\n");
     
    }
    
}




int main()
{
    

     struct Queue* q1= (struct Queue*)malloc(sizeof(struct Queue));
     struct student *s1 = (struct student*)malloc(sizeof(struct student));
    //struct Queue q1;
    initialise(q1);

    int n;
    printf("\n\nSize: ");
    scanf("%d",&n);
    printf("\n");
    

    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n\nStudent Name: ");
        scanf("%s",s[i].name);

        printf("\nRoll no: ");
        scanf("%d",&s[i].roll_no);

    }
    
    for (int i = 0; i < n; i++)
    {
        if(s[i].roll_no%2==0)
        {
            enqueue(q1,s[i].name,s[i].roll_no);
            
        }
    }

    print(q1);
    return 0;
}
