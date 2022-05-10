/*SINTAXE PARA CRIAR FUNÇÕES E LOCAL DA FUNÇÃO 

Para se criar uma função é utilizada a seguinte sintaxe:

<tipo de retorno> <nome> (<parâmetros>){
	<comandos da função>
	<retorno> (não obrigatório)
}

	tipo de retorno: parâmetro obrigatório que indica o tipo de valor que a função vai retornar (int, float, char), quando não é retorno de nenhum valor, usa-se o tipo void
	nome: parâmetro obrigatório que especifica o nome que indentificará a função, não tendo acento e nem caractere especial
	parênteses depois do nome: obrigatório a função sempre terá parênteses acompanhando 
	comandos da função: opcional
	retorno: quando o tipo do retorno for void, esse parâmetro não precisa ser usado, porém se não for void é obrigatório
	
	função main(), significa principal, é usada para identificar qual é a rotina principal do programa e por onde a execução deve começar
	
	exemplo:
	*/
#include<stdio.h>
int somar() {
    return 2 + 3;
}
int main() {
    int resultado = 0;
    resultado = somar();
    printf("O resultado da função é = %d", resultado);
    return 0;
}

/*uma forma resumida:*/

int somar(){
 int x = 0;
 x = 2 + 3;
 return x;
}

/*Uma função pode dar saltos, ou seja elas podem quebrar a linearidade

exemplo:
*/
#include <stdio.h>
float calcular(){
	float num;
	printf("\n Digite um número: ");
	scanf("%f", &num);
	return num * num;
}

int main(){
	float resultado = 0;
	resultado = calcular();
	printf("\n O quadrado do número digitado é %.2f", resultado);
	return 0;
}
