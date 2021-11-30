#include<stdio.h>
#include<conio.h>

int a[50], top= -1;
void push(int);
void pop();
void display();

int main(){
    int value,c;
    while(1){
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&c);
      switch(c){
	 case 1: printf("Enter the value that needs to be inserted: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nPlease choose from 1-4");
      }
   }
   return 0;
}

void push(int value){
   if(top == 100-1)
      printf("\nStack is Full. Insertion is not possible!");
   else{
      top++;
      a[top] = value;

   }
}

void pop(){
   if(top == -1)
      printf("\nStack is empty. Deletion is not possible.");
   else{
      printf("\nDeleted : %d", a[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is empty");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",a[i]);
   }
}
