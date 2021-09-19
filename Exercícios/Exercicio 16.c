#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	int v1,v2, v3, m, n, o;
	
	//16� Programa - A partir de tr�s valores que ser�o digitados, verificar se formam ou n�o um tri�ngulo. Em caso positivo, exibir sua classifica��o: "Is�sceles, escaleno ou eq�il�tero".
	
	//Exibe na tela 
	printf("\nPrograma Para Identificar Um Triangulo: ");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "v1"
	printf("\nDigite o Primeiro Valor: ");
	scanf("%i",&v1);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "v2"
	printf("Digite o Segundo Valor: ");
	scanf("%i",&v2);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "v3"
	printf("Digite o Terceiro Valor: ");
	scanf("%i",&v3);
	
	//Satisfazer as condi��es de exist�ncia do tri�ngulo
	m = v1+v2; 
	n = v1+v3; 
	o = v2+v3; 
	
	//Para existir tri�ngulo, � necess�rio que a soma de 2 lados quaisquer seja maior que o outro lado.
	if (m>v3 && n>v2 && o>v1){
	printf("Valores Satisfazem a Condicao de Triangulo");
	}
	else{
	    printf("Valores Nao Satisfazem a Condicao de Triangulo!");
	    return 0;
	   }
	
	//Verifica quais s�o os tipos de tri�ngulo.
	if(v1==v2 && v2==v3) {
	printf("\nTriangulo Equilatero");
	}
	else if(v1==v2 || v2==v3 || v1==v3 ){
	    printf("\nTriangulo Isosceles");
	}
	else if(v1!=v2 && v1!=v3 && v2!=v3){
	    printf("\nTriangulo Escaleno");
	}
	
	return 0;
}



