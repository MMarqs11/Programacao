#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	int num=0, a=1, b=1, soma=0;
	
	//32� Programa - Calcular e exibir a soma dos "N" primeiros valores da seq��ncia abaixo. O valor "N" ser� digitado, dever� ser positivo, mas menor que cem. Caso o valor n�o satisfa�a a restri��o, enviar mensagem de erro e solicitar o valor novamente.
    //   A seq��ncia: 2, 5, 10, 17, 26, ....
 
	                      
	//Exibe na tela 
	printf("Calcular e Exibir a Soma dos N Primeiros Valores da Sequencia 2,5,10,17,26,37,50...");
	
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "num"
	printf("\nDigite um Numero N Positivo Menor que 100: ");
	scanf("%i",&num);
	
	//Comando While, usado sem intervalos indefinidos
	while(num<0){
	printf("Erro!\nApenas Numeros Positivos. Digite Novamente: ");
	scanf("%i",&num);
	}
	while(num>=100){
	printf("Erro!\nApenas Numeros Menores que 100. Digite Novamente: ");
	scanf("%i",&num);
	}
	//Comando for, usado em intervalos definidos
	for (int i=0; i<num; i++) {
	a=a+b;
	b=b+2;
	printf("%i\n",a);
	soma=soma+a; // A cada looping o valor "a" vai sendo armazenado na vari�vel soma
	}
	
	printf("Resultado da Soma dos N Primeiros Valores da Sequencia: %i",soma);
	return 0;
	}

