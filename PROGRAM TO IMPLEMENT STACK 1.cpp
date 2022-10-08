#include<stdio.h>
#include<conio.h>
#define max 6

typedef struct stack
    {
    int data[max];
    int top;
    }stack;

void init(stack *);
int empty(stack *);
int full(stack *);
void push(stack *,int);
int pop(stack *);
void print(stack *);

void main

{
stack s;
int ch,x;
init(&s);
clrscr();

do{
printf("1.push\n 2.pop\n 3.dispaly\n 4.exit\n");

printf("enter your choice\n");
scanf("%d",&ch);

switch(ch)
{
    case 1:printf("enter value\n");
        scanf("%d",&x);

        if(!full(&s))
            push(&s,x);
        else
            printf("Stack is overflow\n");
        break;

    case 2:if(!empty(&s))
        {
        x=pop(&s);
        printf("popped is %d\n",x);
        printf("remaining elements\n");
        print(&s);
        }
        else
        {
        printf("stack is empty\n");
        }
        break;

    case 3:print(&s);
        break;
}
}
while(ch!=4);
}

void init(stack *s)
{                                     
 s->top=-1;
}

int empty(stack *s)
    {
      if(s->top == -1)
      {
      return(1);
      }
     return(0);
    }

int full(stack *s)
    {
     if(s->top == max-1)
     {
     return(1);
     }
     return(0);
    }

void push(stack *s, int x)
    {
    s->top = s->top+1;
    s->data[s->top]=x;
    }

int pop(stack *s)
    {
    int x;
    x=s->data[s->top];
    s->top=s->top-1;
    return(x);
    }

void print(stack *s)
    {
    int i;
     for(i=s->top;i>=0;i--)
     {
     printf("%d\n",s->data[i]);
     }
    }

