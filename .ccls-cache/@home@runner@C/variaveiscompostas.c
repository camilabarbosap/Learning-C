/*VARIÁVEIS COMPOSTAS/INDEXADAS
	primitivo/homogenea: valores do mesmo tipo
	heterogênea: valores diferentes tipos


vetores são conjuntos de dados de um único tipo dispostos de forma contígua
<tipo> <nome_do_vetor>[tamanho];

ex:*/

#include <stdio.h>
int main(){
    float altura[3] = {1, 1.5, 1.7};
    printf("\n Vetor altura[0] = %f",altura[0]);
    printf("\n Vetor altura[1] = %f",altura[1]);
    printf("\n Vetor altura[2] = %f\n",altura[2]);
    return 0;
}
 