
#include "functions.h"

int potencia (int x, int n)
{
   int n1 = 1;

   if (n > 0)
     n1 = (x * potencia(x, n-1));

   return n1;
}
