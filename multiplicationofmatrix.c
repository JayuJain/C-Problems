#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,i,j,k;
    printf("Enter the order of the matrix:M,N ");
    scanf("%d%d",&m,&n);
    printf("\n Enter the elements of first matrix:");
    for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
        scanf("%d",&a[i][j]);
    }
    }
    printf("\n Enter the elements of second matrix:");
    for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
        scanf("%d",&b[i][j]);
    }
    }
    printf("\nFirst matrix:\n");
    for(i=1;i<=m;i++){

        for(j=1;j<=n;j++){
            printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for(i=1;i<=m;i++){

        for(j=1;j<=n;j++){
            printf("%d\t",b[i][j]);
        }
         printf("\n");
    }
     for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            c[i][j]=0;
            for(k=1;k<=n;k++){
                c[i][j]=c[i][j] + a[i][k]*b[k][j];
            }
        }
     }
     printf("\nMultiplication of two matrix:\n");
    for(i=1;i<=m;i++){

        for(j=1;j<=n;j++){
            printf("%d\t",c[i][j]);
        }
         printf("\n");
    }
    return 0;
}
