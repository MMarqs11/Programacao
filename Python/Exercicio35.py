print("Entrar com 20 valores em um vetor, multiplicar por uma cte e exibir o resultado")

numeros = []

for i in range(0,20,1): #range ( parte do 0, vai até inteiro menor que 20, no passo 1 em 1 )  
    num = int(input('Digite um número: '))
    numeros.append(num)

cte = int(input('Digite o valor da constante: '))

print('O vetor multiplicado pela constante é: ')
for i in range (0,20,1): #varrendo o vetor
   res = cte*numeros[i]
   print(res)
