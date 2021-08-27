#include <stdio.h>
#include "functions.h"

int main() {

    int a, b, s;
  
  // ENTRADA DE DADOS
  scanf("%d %d", &a, &b);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  s = mdc(a, b);

  // SAIDA - IMPRIMINDO O RESULTADO
  printf("MDC = %d\n", s);

  return(0);
}