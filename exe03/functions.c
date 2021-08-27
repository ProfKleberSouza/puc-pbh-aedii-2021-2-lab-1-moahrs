
#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior)
{
    *menor = v[0];
    *maior = v[0];

    for (int ix = 1; ix < n; ix++)
    {
      if (v[ix] < *menor)
        *menor = v[ix];
      if (v[ix] > *maior)
        *maior = v[ix];
    }

    return;
}
