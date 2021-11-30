#include <stdio.h>
void area(int x, int y)
{
  float rect = x * y;
  printf("%f", rect);
}

int main()
{
  int x, y;
  printf("enter the lenght and breadth of Rectangle:\n");
  scanf("%d%d", &x, &y);
  area(x, y);

  return 0;
}
