#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int v1,v2, v3, m, n, o;
	
	//16° Programa - A partir de três valores que serão digitados, verificar se formam ou não um triângulo. Em caso positivo, exibir sua classificação: "Isósceles, escaleno ou eqüilátero".
	
	//Exibe na tela 
	printf("\nPrograma Para Identificar Um Triangulo: ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v1"
	printf("\nDigite o Primeiro Valor: ");
	scanf("%i",&v1);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v2"
	printf("Digite o Segundo Valor: ");
	scanf("%i",&v2);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v3"
	printf("Digite o Terceiro Valor: ");
	scanf("%i",&v3);
	
	//Satisfazer as condições de existência do triângulo
	m = v1+v2; 
	n = v1+v3; 
	o = v2+v3; 
	
	//Para existir triângulo, é necessário que a soma de 2 lados quaisquer seja maior que o outro lado.
	if (m>v3 && n>v2 && o>v1){
	printf("Valores Satisfazem a Condicao de Triangulo");
	}
	else{
	    printf("Valores Nao Satisfazem a Condicao de Triangulo!");
	    return 0;
	   }
	
	//Verifica quais são os tipos de triângulo.
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



