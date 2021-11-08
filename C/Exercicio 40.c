#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	//40° Programa - Entrar com uma matriz de ordem MxN, onde a ordem também será escolhida pelo usuário, sendo que no máximo 10x10. A matriz não precisa ser quadrática. Após a digitação dos elementos, criar uma rotina de consulta, onde o usuário digita um valor e a rotina exibe em qual (ou quais) posição da matriz, o valor escolhido se encontra. Enviar mensagem comunicando se por acaso o valor não estiver armazenado na matriz. Perguntar ao usuário, se deseja ou não fazer nova consulta.
	
	//Declaração das variáveis
	int i,j, cons, res, linhas, colunas, valor=0;
	
	//Declaração da variável ponteiro de matriz dinâmica
	int **numeros;
	do
	{
	system("cls");
	//Exibe na tela
	printf("Entrar com uma Matriz MxN, Criar uma rotina e Exibir A(As) Posicao do Valor Escolhido");
	
	//Escolhendo a ordem da linha da matriz
	printf("\nDigite a Quantidade de Linhas no Maximo 10: ");
	scanf("%i", &linhas);
	//Laço de condição 
	while(linhas>10 || linhas<0){
	printf("Erro!\nDigite qtd. de Linhas Novamente: ");
	scanf("%i",&linhas);
	}
	//Escolhendo a ordem da coluna da matriz
	printf("Digite a Quantidade de Colunas no Maximo 10: ");
	scanf("%i", &colunas);
	//Laço de condição
	while(colunas>10 || colunas<0){
	printf("Erro!\nDigite qtd de Colunas Novamente: ");
	scanf("%i",&colunas);
	}
	numeros = (int**)malloc(linhas*sizeof(int));
	
	for(int i=0; i<linhas; i++){
	numeros[i]= (int*)malloc(colunas*sizeof(int));
	}
	//Populando o vetor matriz MxN
	printf("Digite os Numeros para Matriz %i x %i\n", linhas, colunas);
	for(int i=0; i<linhas; i++){
	    for(int j=0; j<colunas; j++){
	     scanf("%i", &numeros[i][j]);
	    }
	}
	printf("Os Numeros Digitados na Matriz foram:\n");
	for(int i=0; i<linhas; i++){
	   for(int j=0; j<colunas; j++){
	       printf(" %i  ", numeros[i][j]);
	   } 
	printf("\n");
	}
	//Rotina de consulta
	printf("\nDigite um Numero para Consulta: ");
	scanf("%i", &cons);
	
	//Varrendo o vetor matriz
	for(int i=0; i<linhas; i++){
	    for(int j=0; j<colunas; j++)
	  
	 //Se o valor da consulta for igual a algum valor do vetor matriz
	   if (cons==numeros[i][j]){ 
	       printf("\nO Numero %i se Encontra na Linha %i e na Coluna %i do vetor matriz",cons,i,j);
	   }
	//Se não for igual a nenhum valor do vetor, acrescenta 1 na variável "valor" 
	   else {valor++; 
	   }
	//Qdo "valor" for igual a "qtde", o Looping foi de "0" até "qtde" e não encontrou o valor
	   if(valor==linhas){     
	   } 
	    printf("\nValor nao Encontrado!\n");
	    valor=0;
	   }
	printf("\nDigite 1 para nova Consulta ou 2 para Sair: ");
	scanf("%i",&res); 
	   }while(res !=2);
	   return 0;
	   }

