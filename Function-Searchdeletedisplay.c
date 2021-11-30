#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int i=1,j,a[100],n,p;
   int chc,no;
   printf("Enter how many numbers you have to insert in an array:");
   scanf("%d",&n);
   printf("\nenter the elements of array:");
   for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
   }
   while(i<=100){
    printf("\n1. Display 2.Search 3.Delete 4.Sort Ascending 5.Sort Descending 6.insert 7.Exit\n");
    scanf("%d",&chc);
    switch(chc){
    case 1:
        for(i=1;i<=n;i++){
            printf("%4d",a[i]);
        }
        continue;
    case 2:
        printf("What number you have to search?:\n");
        scanf("%d",&no);
        search(n,no,a);
        continue;
    case 3:
        printf("Which number you wanna delete?\n");
        scanf("%d",&no);
        deleted(n,no,a);
        continue;
    case 4:
        printf("Original order:\t");
        for(i=1;i<=n;i++){
            printf("%4d",a[i]);
        }
        ascending(n,a);
        continue;
    case 5:
        printf("Original order:\t");
        for(i=1;i<=n;i++){
            printf("%4d",a[i]);
        }
        printf("\n");
        descending(n,a);
        continue;
    case 6:
        printf("Enter the index where number is to be inserted:");
        scanf("%d",&no);
        printf("Enter the number to be inserted:");
        scanf("%d",&p);
        insert(n,no,p,a);
        continue;

    default:
    goto end;
    }
    i++;
    }
    end:
        printf("Thankyou!");

     return 0;
   }
   int search(int n,int no,int a[100]){
       int i,found;
    for(i=1;i<=n;i++){
    if(a[i]==no){
       found=1;
        break;
    }
    }
    if(found==1){
         printf("'%d' is available in the array ",no);
    }
    else{
         printf("'%d' is not available in the array ",no);
    }


}
int deleted(int n,int no,int a[100]){

int i;
    for(i=1;i<=n;i++){
        if(no==a[i]){
            a[i]=0;
            break;
        }
    }
    for(i=1;i<=n;i++){
        printf("%4d",a[i]);
    }
}


int ascending(int n,int a[100]){
int temp;
int i,j;
    for(j=1;j<=n-1;j++){
    for(i=1;i<=n-j;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    printf("Ascending order:\n");
    for(i=1;i<=n;i++){
        printf("%4d",a[i]);
    }
}
int descending(int n,int a[100]){
int temp;
int i,j;
    for(j=1;j<=n-1;j++){
    for(i=1;i<=n-j;i++){
        if(a[i]< a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    printf("Descending order:");
    for(i=1;i<=n;i++){
        printf("%4d",a[i]);
    }
}
int insert(int n,int no,int p,int a[100]){
    int i;
    a[no]=p;
     for(i=1;i<=n;i++){
            printf("%4d",a[i]);
        }
}
