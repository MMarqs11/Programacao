#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
	
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	int fn, f1=1, f2=0;
	
	//30� Programa - Exibir os trinta primeiros valores da s�rie de Fibonacci. A s�rie: 1, 1, 2, 3, 5, 8, ...
	                    
	//Exibe na tela 
	printf("Exibir os Trinta Primeiros Numeros da Serie de FIBONACCI");
	
	printf("\nPressione Qualquer Tecla para Iniciar: ");
	getch();
	
	for(int i=0; i<30; i++){
	fn=f1+f2;
	printf("\n%i",fn);
	f1=f2;
	f2=fn;
	}
	
	return 0;
	}

