#include <stdio.h>
#include <stdlib.h>
//WAP sum of upper and lower triangular of a matrix
int main()
{
    int a[10][10],i,j,m,n,usum=0,lsum=0;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    printf("\nEnter the element of a matrix:");
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //For sumation of lower triangular of matrix
    for(i=1;i<=m-1;i++){
        for(j=i+1;j<=n;j++){
            lsum+=a[i][j];
        }
    }
     //For sumation of upper triangular of matrix
    for(i=2;i<=m;i++){
        for(j=1;j<=i-1;j++){
            usum+=a[i][j];
        }
    }
    printf("\nSum of Upper triangular of a matrix:%d",usum);
    printf("\nSum of lower triangular of a matrix:%d",lsum);
    return 0;
}
