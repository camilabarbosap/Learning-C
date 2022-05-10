/*CONSTANTE EM C
#define <nome_da_constante> <valor>
ou
const <tipo> <nome_da_constante>;

ex:*/

#include <stdio.h>
#define PI 3.14
int main(){
    const float G = 9.80;
    printf("\n PI = %f", PI);
    printf("\n G = %f\n", G);
    return 0;
}
