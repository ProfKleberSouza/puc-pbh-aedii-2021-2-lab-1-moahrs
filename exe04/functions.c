#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"

void numero_vogais(char texto[])
{
  int v[5] = {0,0,0,0,0};

  if (texto != NULL)
  {
    int tamanho = strlen(texto);
    
    for (int ix = 0; ix < tamanho; ix++)
    {
      char vogal = toupper(texto[ix]);

      if (vogal == 'A')
        v[0] += 1;
      if (vogal == 'E')
        v[1] += 1;
      if (vogal == 'I')
        v[2] += 1;
      if (vogal == 'O')
        v[3] += 1;
      if (vogal == 'U')
        v[4] += 1;
    }
  }

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("A = %d\n", v[0]);
  printf("E = %d\n", v[1]);
  printf("I = %d\n", v[2]);
  printf("O = %d\n", v[3]);
  printf("U = %d\n", v[4]);
}
