print("Exibir a tabuada no intervalo de 1 a 10, somente de nºs positivos")

num = int(input('Digite um número positivo para a tabuada: '))

while num <=0:
    print("Erro! Apenas números positivos")
    num = int(input("Digite novamente: "))

for i in range(1, 11, 1): #range ( parte do 1, vai até inteiro menor que 11, no passo 1 em 1)  
    res = num * i
    print('{num} x {i} = {res}')
