/*VARIÁVEIS EM C
tipos: int (inteiro), float ou double (ponto flutuante), char (caractere) e bool (boleano, mas para usar é preciso incluir a biblioteca <stdbool.h>)

toda função em C deve ter uma função específica chama "main", que é o início do programa

- modificadores de tamanhos de variáveis
	unsigned (armazena só a parte positiva)
	short (reduz espaço de memória)
	long (aumenta capacidade padrão)

printf é uma função da biblioteca <stdio.h>, então tem que incluir quando for usar

\n cria uma quebra de linha

ESPECIFICADORES DE VARIÁVEIS
	%d para numeros inteiros
	%f para pontos flutuantes
	%c para caracteres
	%.3f para especificar a qntdd de casas decimais do ponto flutuante

ex:*/

int main(){
	int idade = 18;
	float salario = 1250.75;
	double porcentagem_desconto = 2.5;
	char genero = 'F';
	float altura = 1.63;
	
	printf("\n Idade: %d",idade);
	printf("\n Salario: %f",salario);
	printf("\n Desconto (%): %f", porcentagem_desconto);
	printf("\n Genero: %c", genero);
	printf("\n Altura: %.3f",altura);
	return 0;
}
