print("Armazenar um máximo de 20 valores e criar uma rotina de consulta que exibe sua posição no vetor")

numeros = []

qtde = int(input('Digite a quantidade de valores: '))

while qtde<=0 or qtde>3:
    print("Erro! Fora da faixa possível de valores")
    qtde = int(input("Digite novamente: "))

#Populando o vetor
for i in range(0,3,1): #range ( parte do 0, vai até inteiro menor que 10, no passo 1 em 1 )  
    num = int(input('Digite um número: '))
    numeros.append(num)

#Rotina de consulta
cons = int(input('Digite um número para consulta: '))

valor=0
#Varrendo o vetor
for i in range(0,3,1): #range ( parte do 0, vai até inteiro menor que 20, no passo 1 em 1 ) 
    if cons==numeros[i]: 
     print("O número se encontra na posição: {i} do vetor")
    else:
     valor=valor+1
    if valor==qtde:
     print('Valor não encontrado!')
