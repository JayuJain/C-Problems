#include <stdio.h>

int main()
{
  int i, Number, count;

  printf(" Prime Number from 75 to 150 are: \n");
  for(Number = 75; Number <= 150; Number++)
  {
    count = 0;
    for (i = 2; i <= Number/2; i++)
    {
  	if(Number%i == 0)
  	{
     	  count++;
	}
    }
    if(count == 0)
    {
	printf(" %d ", Number);
    }
  }
  return 0;
}
