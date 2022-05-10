/*ENDEREÇO DE MEMÓRIA
operador & permite acessar os endereços de memória das variáveis

scanf("%d", &variavel);   utilizado para armazenar valores inteiros digitados pelo usuário numa variável, por ex
*/
#include <stdio.h>
int main(){
    int x = 5;
    int y = 10;

    printf("\n Valor guardado em x: %d",x);
    printf("\n Valor guardado em y: %d",y);

    printf("\n Endereço de x: %x",&x);
    printf("\n Endereço de y: %x\n",&y);
}