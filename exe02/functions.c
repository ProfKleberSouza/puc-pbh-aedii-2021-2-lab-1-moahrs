
#include "functions.h"

int menor(int v[], int n)
{
    int vMenor = v[0];

    for (int ix = 1; ix < n; ix++)
    {
      if (v[ix] < vMenor)
        vMenor = v[ix];
    }

    return vMenor;
}
