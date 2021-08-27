#include <stdio.h>
#include "functions.h"

int main() {

  int n, vMenor, vMaior;
  
  // ENTRADA DE DADOS
  scanf("%d", &n);

  int v[n];

  for (int ix = 0; ix < n; ix++)
    scanf("%d", &v[ix]);
  
  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  menor_maior(v, n, &vMenor, &vMaior);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MENOR = %d\n", vMenor);
  printf("MAIOR = %d\n", vMaior);

  return(0);
}