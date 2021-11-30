#include<stdio.h>

void main ()
{
  int i,j,n,m,a[10][10],b[10][10];
  printf("Enter number of rows and coloumn : ");
  scanf("%d %d",&m,&n);

   for(i=0;i<=m-1;i++)
  {
      for(j=0;j<=n-1;j++)
      {
          printf("Enter the element of %d row and %d coloumn of matrix : ",i+1,j+1);
          scanf("%d",&a[i][j]);
          printf("\n");
      }
  }
  printf("Original Matrix is : \n");
  for(i=0;i<=m-1;i++)
  {
      for(j=0;j<=n-1;j++)
      {
          printf("%d \t",a[i][j]);
      }
      printf("\n");
  }

  for(i=0;i<=m-1;i++)
  {
      for(j=0;j<=n-1;j++)
      {
         b[j][i]=a[i][j];
      }
  }
  printf("The transpose of the matrix is : \n");

  for(i=0;i<=n-1;i++)
  {
      for(j=0;j<=m-1;j++)
      {
          printf("%d \t",b[i][j]);
      }
      printf("\n");
  }
}
