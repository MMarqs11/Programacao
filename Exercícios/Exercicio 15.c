#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	//Declara��o das vari�veis
	float p, a, imc;
	
	//15� Programa - Entrar com o peso e a altura de uma determinada pessoa. Ap�s a digita��o, exibir se esta pessoa est� ou n�o com seu peso ideal. 
	
	//Exibe na tela 
	printf("Calculo do IMC: ");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "p"
	printf("\nDigite o Valor do Peso em KG: ");
	scanf("%f",&p);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "a"
	printf("Digite o Valor da Altura em M: ");
	scanf("%f",&a);
	
	//Faz a multiplica��o do valor obtido acima
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

