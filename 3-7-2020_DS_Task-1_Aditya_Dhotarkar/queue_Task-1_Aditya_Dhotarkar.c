#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char name[20];
    int roll_no;
}student;

typedef struct Queue
{
    int arr[10];
    int front,rear;
}Queue;

void init(Queue* q)
{
    q->front = 0;
    q->rear = 0;
}

void enqueue(Queue* q, int x)
{
    q->arr[q->rear++] = x;
}

int dequeue(Queue* q)
{
    return q->arr[q->front++];
}

int isEmpty(Queue* q)
{
    return q->front == q->rear;
}

void print(Queue* q)
{
    if(isEmpty(q))
    {
        printf("There are no students with Even Roll Number.");
        return;
    }
    printf("Even Roll Numbers are : \n");
    for(int i = q->front; i<q->rear ; i++)
    {
        printf("%d ",q->arr[i]);
    }
}

int main()
{
    Queue* q1 = (Queue*)malloc(sizeof(Queue));
    init(q1);
    int n , i;
    student s[50];
    printf("Enter the no of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Students Name : ");
        scanf("%s",s[i].name);
        printf("\nEnter Students Roll No. :");
        scanf("%d",&s[i].roll_no);
    }

    for(i=0;i<n;i++)
    {
        if(s[i].roll_no % 2 == 0)
        {
            enqueue(q1,s[i].roll_no);
        }
    }
    print(q1);
    return 0;
}
