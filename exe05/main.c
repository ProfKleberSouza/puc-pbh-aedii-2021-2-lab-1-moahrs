#include <stdio.h>
#include "functions.h"

int main() {

  char m[100], s[100];
  
  // ENTRADA DE DADOS
  fgets(s, 100, stdin);

  // PROCESSAMENTO - EXECUTANDO A FUNCAO
  inverte(s);

  return(0);
}