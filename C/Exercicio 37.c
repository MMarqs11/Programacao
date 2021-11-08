#include<stdlib.h>
#include<stdio.h>
	
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	
	//37� Programa -. Armazenar um m�ximo de 20 valores em um vetor. A quantidade de valores a serem armazenados ser� escolhida pelo usu�rio. Enviar mensagem de erro, caso a quantidade de valores escolhida esteja fora da faixa poss�vel e solicitar a quantidade novamente. Ap�s a digita��o dos valores, criar uma rotina de consulta, onde o usu�rio digita um n�mero e o programa exibe em qual posi��o do vetor este n�mero est� localizado. Se o n�mero n�o for encontrado, enviar mensagem "Valor n�o encontrado!". Perguntar ao usu�rio se deseja ou n�o fazer uma nova consulta, consistir a resposta e encerrar o programa em caso negativo.
	
	//Declara��o das vari�veis
	int i,res,qtde,cons,valor=0;
	
	//Declara��o de vari�vel do tipo ponteiro
	int *numeros;
	
	do
	{
	system("cls");
	//Exibe na tela
	printf("Armazenar um Maximo de 20 Valores e Criar uma Rotina de Consulta Exibindo sua Posicao no Vetor");
	
	printf("\nDigite a Quantidade de Valores: ");
	scanf("%i", &qtde);
	
	//La�o de condi��o 
	while(qtde>20 || qtde<0){
	printf("Erro!\nFora da Faixa Possivel de Valores. Digite Novamente: ");
	scanf("%i",&qtde);
	}
	// O malloc (memory allocation) reserva blocos na mem�ria e o *ponteiro numeros aponta para l�
	numeros = (int*)malloc(qtde*sizeof(int));
	
	//Looping para popular o vetor
	
	printf("Digite os Numeros:\n");
	for(i=0; i<qtde; i++){
	    scanf("%i", &numeros[i]);
	}
	//Rotina de consulta
	printf("Digite um Numero para Consulta: ");
	scanf("%i", &cons);
	
	//Varrendo o vetor
	for(i=0; i<qtde; i++){ 
	//Se o valor da consulta for igual a algum valor do vetor
	   if (cons==numeros[i]){ 
	       printf("O Numero %i se Encontra na Posicao %i do vetor",cons,i);
	   }
	//Se n�o for igual a nenhum valor do vetor, acrescenta 1 na vari�vel "valor"
	   else {valor++; 
	   }
	//Qdo "valor" for igual a "qtde", o Looping foi de "0" at� "qtde" e n�o encontrou o valor
	   if(valor==qtde){
	       printf("Valor Nao Encontrado!");
	       valor=0; //Atribui zero a vari�vel valor para nova consulta
	   }
	}
	printf("\nDigite 1 para nova Consulta ou 2 para Sair: ");
	    scanf("%i",&res); 
	}while(res !=2);
	
	return 0;
	}

