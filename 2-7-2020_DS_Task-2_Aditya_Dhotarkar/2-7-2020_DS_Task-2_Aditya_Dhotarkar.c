#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int top = -1;
int stack[30];

void push(char);
char pop();
int check(char[]);

int main()
{
    char exp[30];
    int valid;
    printf("Enter an algebraic expression : ");
    gets(exp);
    valid = check(exp);
    if (valid == 1)
        printf("Valid expression\n");
    else
        printf("Invalid expression\n");

    return 0;
}
int check(char exp[])
{
    int i;
    char temp;
    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        if (exp[i] == ')')
            if (top == -1)
            {
                printf("Right parentheses are more than left parentheses\n");
                return 0;
            }
            else
            {
                temp = pop();
                
            }
    }
    if (top == -1)
    {
        printf("Balanced Parentheses\n");
        return 1;
    }
    else
    {
        printf("Left parentheses more than right parentheses\n");
        return 0;
    }
}

void push(char item)
{
    stack[top++] = item;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return (stack[top--]);
}