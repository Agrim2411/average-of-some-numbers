#include <stdio.h>
#include <ctype.h>
int main(void)
{

  double total = 0.0;
  double value = 0.0;
  unsigned int count = 0;

  printf("\n This program calculates the average of n numbers ");
  printf("Enter number of numbers ");
  scanf("%d",&count);
  for(int i = 0 ; i < count;i++)
  {
    int x;
    scanf("%d",&x);
    total +=x;
  }
  printf("\nThe average of given numbers is %.2lf !", total / count);
  return 0;
}
