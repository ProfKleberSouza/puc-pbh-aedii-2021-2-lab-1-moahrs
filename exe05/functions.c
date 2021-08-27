
#include "functions.h"
#include <stdio.h>
#include <string.h>

void inverte(char texto[])
{
  for(int ix = 0; ix < strlen(texto) / 2; ix++)
  {
      char temp = texto[ix];

      texto[ix] = texto[strlen(texto) - ix - 1];
      
      texto[strlen(texto) - ix - 1] = temp;
  }

  printf("%s\n",texto);
}
