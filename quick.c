#include <stdio.h>


void quick(void);
void quicksort(int a[],int left,int right,int qq);
int partition(int a[], int left,int right);
void mrg(void);
void mergeSort(int a[] , int l , int r,int mm);
void merge(int a[],int l,int mid,int r);
int main()
    {
       int number,flag=1;
       while (flag!=0)
        {
         printf("Choose an option: \n");
         printf("1)Quick Sort \n2)Merge Sort \n3)Quit\n");
         scanf("%d",&number);
         switch(number)
    {
       case(1):
       quick();
       break;
       case(2):
       mrg();
       break;
       case(3):
       flag = 0;
       break;
       default:
       printf("Invalid Input :(\n");
       break;
   }
    }
 }
void quick()
 {
      int n,i,a[100];
      printf("Enter the number of elements for sorting: ");
      scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
 printf("Enter Element %d: ", i+1);
 scanf("%d", &a[i]);
 }
 printf("\nThe entered array is : ");
 for(i=0 ; i<n ; i++)
 {
 printf("%2d", a[i]);
 }
 printf("\n");
 int w = n;
 quicksort(a,0,n-1,w);
 printf("\nFinal sorted array is: ");
 for(int z=0 ; z<n ; z++)
 {
 printf("%2d", a[z]);
 }
 printf("\n");
 }
void quicksort(int a[],int left,int right,int w)
 {
 if(left<right)
 {
 printf("Iteration :");
 for(int z=0;z<w;z++)
 {
 printf("%2d",a[z]);
 }
 printf("\n");
 int p = partition(a,left,right);
 quicksort(a,left,p-1,w);
 quicksort(a,p+1,right,w);
 }
 }
int partition(int a[], int left,int right)
 {
 int p = a[left];
 int l = left+1 ;int r = right;
 while(l<r)
 {
 while(a[l]<p && l<right)
 {
 l++;
 }
 while(a[r]>= p && r>left)
 {
 r--;
 }
 if(l<r)
 {
 int temp = a[l];
 a[l] = a[r];
 a[r] = temp;
 }
 }
 if(a[r]<a[left])
 {
 int tmp = a[left];
 a[left] = a[r];
 a[r] = tmp;
 }
 return r;
 }
void mrg()
 {
 int n,i,a[100];
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
 printf("Enter the number: ");
 scanf("%d", &a[i]);
 }
 printf("\nThe entered array is : ");
 for(i=0 ; i<n ; i++)
 {
 printf("%2d", a[i]);
 }
 printf("\n");
 int b = n;
 mergeSort(a,0,n-1,b);
 printf("\nFinal sorted array is: ");
 for(int z=0 ; z<n ; z++)
 {
 printf("%2d", a[z]);
 }
 printf("\n");
 }
void mergeSort(int a[] , int l , int r, int b)
 {
 if(l<r)
 {
 int mid = (l+r)/2;
 mergeSort(a,l,mid,b);
 mergeSort(a,mid+1,r,b);
 merge(a,l,mid,r);
 printf("Iteration :");
 for(int z=0;z<b;z++)
 {
 printf("%2d",a[z]);
 }
 printf("\n");
 }
 }
void merge(int a[],int l,int mid,int r)
 {
 int b[100],i,j,k;
 for (int z=l;z<=r;z++)
 {
 b[z] = a[z];
 }
 i=l;
 j=mid+1;
 k=l;
 while(i<=mid && j<=r)
 {
 if(b[i] < b[j])
 {
 a[k++] = b[i++];
 }
 else
 {
 a[k++] = b[j++];
 }
 }
 while(i<=mid)
 {
 a[k++] = b[i++];
 }
 while(j<=r)
 {
 a[k++] = b[j++];
 }
 }
