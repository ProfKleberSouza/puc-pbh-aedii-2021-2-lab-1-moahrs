
#include "functions.h"
#include <string.h>

bool is_palendromo2(char texto[], int vIni, int vFim)
{
    if (vIni == vFim)
      return 1;
 
    if (texto[vIni] != texto[vFim])
      return 0;
 
    if (vIni < vFim + 1)
      return is_palendromo2(texto, vIni + 1, vFim - 1);
 
    return 1;
}
 
bool is_palindromo(char texto[])
{
    int n = strlen(texto);
     
    if (n == 0)
        return 1;
     
    return is_palendromo2(texto, 0, n - 1);
}
