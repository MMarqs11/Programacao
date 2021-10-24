#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	//Declaração das variáveis
	float p, a, imc;
	
	//15° Programa - Entrar com o peso e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. 
	
	//Exibe na tela 
	printf("Calculo do IMC: ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p"
	printf("\nDigite o Valor do Peso em KG: ");
	scanf("%f",&p);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
	printf("Digite o Valor da Altura em M: ");
	scanf("%f",&a);
	
	//Faz a multiplicação do valor obtido acima
	imc = p / (a*a);
	
	//Exibe o resultado final
	printf("O IMC e: %.2f",imc);
	
	if(imc<20){
	printf("\nAbaixo do Peso!");
	}
	else if(imc>=20 && imc<25){
	printf("\nPeso Ideal");
	}
	else{
	printf("\nAcima do Peso!");
	}
	return 0;
}

