#include <stdio.h>
#include <stdlib.h>
// T=(A+B) * (C*D)
int matadd(int a[10][10],int b[10][10],int c[10][10],int *m,int *n){
    int i,j;
    for(i=1;i<=*m;i++){
    for(j=1;j<=*n;j++){
    c[i][j] = a[i][j]+b[i][j];
    }}
    return c;
}
int matmult(int a[10][10],int b[10][10],int c[10][10],int *m,int *n){
    int i,j,k;
    for(i=1;i<=*m;i++){
    for(j=1;j<=*n;j++) {
    c[i][j]=0;
    for(k=1;k<=*n;k++){
    c[i][j]+=a[i][k]*b[k][j];
    }
    }
    }
    return c;
}

int matread(int a[10][10],int *m,int *n){
    int i,j;
    printf("Enter the order of the matrix:");
    scanf("%d%d",m,n);
    printf("enter the Elements of the matrix:");
    for(i=1;i<=*m;i++){
    for(j=1;j<=*n;j++){
        scanf("%d",&a[i][j]);
    }
    }
}

int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],p[10][10],t[10][10],q[10][10],m,n,l,i,j,k;
    matread(a,&m,&n);
    matread(b,&m,&n);
    matread(c,&m,&n);
    matread(d,&m,&n);
    matadd(a,b,p,&m,&n);
    printf("\nP matrix:\n");
    for(i=1;i<=m;i++){
            printf("\n");
    for(j=1;j<=n;j++){
        printf("%4d",p[i][j]);
    }
    }
    matmult(c,d,q,&m,&n);
    printf("\nMatrix q:\n");
    for(i=1;i<=m;i++){
        printf("\n");
    for(j=1;j<=n;j++){
        printf("%4d",q[i][j]);
    }
    }
    matmult(p,q,t,&m,&n);
    printf("\nMatrix p*q=\n");
     for(i=1;i<=m;i++){
            printf("\n");
    for(j=1;j<=n;j++){
        printf("%4d",t[i][j]);
    }
    }

    return 0;
}
