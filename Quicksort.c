#include <stdio.h>
#include <stdlib.h>
void output(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
   }
   printf("\n");
}
void input(int a[] , int *n)
{
    int i;
    printf("Enter the size of an array:");
    scanf("%d",&*n);
    printf("Enter the elements of an array:");
    for(i=0;i<*n;i++){
        scanf("%d",&a[i]);
}
}
 void quicksort(int a[],int l,int h,int n)
 {
     int partitionindex;
     if(l<h)
     {
         partitionindex = partition(a,l,h);
         printf("Iteration :");
         output(a,n);
         printf("\n");
         quicksort(a,l,partitionindex-1,n);
         quicksort(a,partitionindex+1,h,n);
     }
 }
 int partition(int a[],int l,int h)
 {
     int i=l+1,temp;
     int j=h;
     int pivot=a[l];
     do
     {
         while(a[i]<=pivot)
         {
             i++;
         }
         while(a[j]>pivot)
         {
             j--;
         }
         if(i<j)
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }while(i<j);
     temp=a[l];
     a[l]=a[j];
     a[j]=temp;
     return j;
     }
   void mergesort(int a[],int l,int h,int n)
   {
       if(l<h)
       {    printf("Iteration :");
         output(a,n);
         printf("\n");
           int m=(l+h)/2;
           mergesort(a,l,m,n);
           mergesort(a,m+1,h,n);
           merge(a,l,m,h);
       }
   }

   void merge(int a[],int l,int m,int h)
   {
       int i=l,j=m+1,k=l,b[h+1];

       while(i<=m && j<=h)
       {
           if(a[i]<a[j])
           {
               b[k++]=a[i++];
           }
           else{
            b[k++]=a[j++];
           }
       }
       while(i<=m)
       {
         b[k++]=a[i++];
       }
       while(j<=h)
       {
         b[k++]=a[j++];
       }
       for(i=l;i<=h;i++)
       {
           a[i]=b[i];
       }
   }




int main()
{
    int a[100],i,j,chc,n;
    char choice;
   do{
    printf(" 1.Quick sort\n 2.Merge sort\n 3.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&chc);

    switch(chc){
    case 1:
        input(a,&n);
        quicksort(a,0,n-1,n);
        printf("After sorting:\n");
        output(a,n);
        break;
    case 2:
        input(a,&n);
        mergesort(a,0,n-1,n);
        printf("After sorting:\n");
        output(a,n);
        break;
    default:
        printf("Enter the valid option");
       }
       }while(chc<3);
       return 0;

   }
