#include <stdio.h>
#include <stdlib.h>
int sigma(int n,int x[30],int y[30],int z[30]){
    int sum=0;int i;
    for(i=1;i<=n;i++){
        sum+=x[i]*y[i]*z[i];
    }
    return sum;
}
int main()
{
   int n,x[30],y[30],z[30],i;
   int t;
   printf("Enter the total numbers of terms:");
   scanf("%d",&n);
   printf("\nEnter terms xi,yi,zi:");
   for(i=1;i<=n;i++){
        printf("\nEnter x%d y%d z%d=",i,i,i);
    scanf("%d%d%d",&x[i],&y[i],&z[i]);
   }
   t =sigma(n,x,x,y)+sigma(n,x,y,y)+sigma(n,x,y,z);
   printf("\n T=%d",t);
    return 0;
}
