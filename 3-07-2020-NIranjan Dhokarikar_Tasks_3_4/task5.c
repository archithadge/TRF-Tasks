# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct student
{
    int roll_no;
    char name[1000];
};

struct Queue
{
    char data[30][100];
    int front,rear;
};

void initialise(struct Queue *q)
{
    q->front = 0;
    q->rear = 0;
}

void enqueue(struct Queue *q, char * a)
{
    strcpy(q->data[q->rear++],a);
    
}

void print(struct Queue* q)
{
    printf("\n\nTHE STUDENTS ARE:\n\n");
    
    for(int i=q->front;i<q->rear;i++)
    {
        
        printf("%s",q->data[i]);
        printf("\n");
    }
    
}


int main()
{
    

     struct Queue* q1=(struct Queue*)malloc(sizeof(struct Queue));
    //struct Queue q1;
    initialise(q1);

    int n;
    printf("Size:");
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
            enqueue(q1,s[i].name);
        }
    }

    print(q1);
    return 0;
}
