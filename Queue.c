#include<stdio.h>
#define max 5
    int rear=-1,front=-1;
    int queue[max];
    void enqueue(int data)
    {
        if (front==rear==-1)
        {
          front=0;
          rear=0;
          queue[rear]=data;
        }
        else if((rear+1)%max==front)
        {
            printf("Queue is full");
        }
        else
        {
            rear=(rear+1)%max;
            queue[rear]=data;
        }
    }
void dequeue()
{
    if(front==rear==-1)
    {
        printf("Queue is empty");
    }
    else if(front==rear)
    {
        printf("The element deleted is %d",queue[front]);
        front==rear==-1;
    }
    else
    {
        printf("The element deleted is %d",queue[front]);
        front=(front+1)%max;
    }
}
void display()
{

   if(front==-1 && rear==-1)
   {
       printf("\nQueue is empty..\n");
   }
   else
   {
       printf("\nElements in a Queue are :");
       while(front<=rear)
       {
           printf(" %d", queue[front]);
           front=(front+1)%max;
       }
   }
   printf("\n");
}
void isFull()
{
    if((rear+1)%max==front)
    printf("Queue is full");
}
void isEmpty()
{
    if(front==rear==-1)
    {
        printf("Queue is empty");
    }

}
int main()
{
    int x,choice=1;
    while(choice<6 && choice!=0)
    {
     printf("\nPress 1: Insert an element");
   printf("\nPress 2: Delete an element");
   printf("\nPress 3: Display the queue");
   printf("\nPress 4: Check if the queue is full or not");
   printf("\nPress 5: Check if the queue is empty or not");
   printf("\nPress any other number to exit");
    printf("\nEnter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the element to be inserted:");
        scanf("%d",&x);
        enqueue(x);
        break;

        case 2:
        dequeue();
        break;

        case 3:
           display();
           break;


        case 4:
        isFull();
        break;

        case 5:
        isEmpty();
        break;

        default:
        printf("Enter a valid choice");
        break;
    }

    }

    return 0;
}
