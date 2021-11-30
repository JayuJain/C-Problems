#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j,n,a[100],temp,p,q,temp1;
    printf("Enter the size of array : \n") ;
    scanf("%d",&n) ;
    printf("Enter the elements : \n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
            {
                 if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order of an array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]) ;
    }
        printf("\n first smallest no is :%d \n",a[0]) ;
        printf("second smallest no is :%d ",a[1]) ;
    return 0;
}
