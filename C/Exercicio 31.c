#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
	
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int fn, f1=-1, f2=1, f3=1;
	
	//31° Programa - Exibir os vinte primeiros valores da série de Bergamaschi. A série: 1, 1, 1, 3, 5, 9, 17, ... 
	
	//Exibe na tela 
	printf("Exibir os Vinte Primeiros Valores da Serie de BERGAMASCHI");
	
	printf("\nPressione Qualquer Tecla para Iniciar: ");
	fn = getch();
	
	for(int i=0; i<20; i++){   
	fn=(f1+f2+f3);
	printf("\n%i",fn);
	f3=f2;
	f2=f1;
	f1=fn;
	}
	
	return 0;
	}

