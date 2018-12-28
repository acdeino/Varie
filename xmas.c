#include <stdio.h>
#include <stdlib.h>
#define XMAS 10
#define V "\033[1;32m"
#define N "\033[0m"
#define M "\033[1;31m"

int main (void)
{
          /* Christmas Tree in C */
  int i, j;
  printf("\t\t");
  for(i = 0; i < XMAS+3; i++)
  {
    for(j = 0; j<= XMAS*2; i++)
       if (j < XMAS-((i>= XMAS)?:i) || j > XMAS+((i>=XMAS)?1:i) )
         printf(".");
      else
         printf(%s^%s, ((i>XMAS)?M:V), N);
    print("\n\t\t");
  }
  printf("\n\t\t%sMerry Fucking Christmas!%s", M, N);
  return(0);
}
