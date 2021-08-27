#include <stdio.h>
#include "functions.h"

int main() {

  int n, s;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);

  int v[n];

  for (int ix = 0; ix < n; ix++)
    scanf("%d", &v[ix]);
  
  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  s = menor(v, n);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", s);

  return(0);
}