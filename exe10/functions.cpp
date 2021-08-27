#include <stdio.h>
#include <cmath> 
#include "functions.h"

void tabela_verdade2(int i, int p, int k, int d)
{
  if (i < p)
  {
    if (k < d)
    {
      int v = i & 1 << d - 1 - k;
      printf("%d", v == 0 ? 0 : 1);
    }
    else
    {
      printf("\n");
      k = -1;
      i++;
    }

    k++;
    tabela_verdade2(i, p, k, d);
  }
}

void tabela_verdade(int d)
{
	int p = (int) pow(2, d);

  tabela_verdade2(0, p, 0, d);
}
