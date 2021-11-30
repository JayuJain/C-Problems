#include <stdio.h>
int main()
{
  int a, b, c, n, i;
  printf("Enter the no. of terms");
  scanf("%d", &n);
  a = 0;
  b = 1;
  printf("%d ", a);
  printf("%d ", b);
  for (i = 3; i <= n; i++)
  {
    c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
  }
}