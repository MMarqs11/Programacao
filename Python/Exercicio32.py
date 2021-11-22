print("Calcular e exibir a soma dos N primeiros valores da sequência 2,5,10,17,26,37,50...")
num = int(input('Digite um número N positivo menor que 100: '))

while num <=0:
    print("Erro! Apenas números positivos")
    num = int(input("Digite novamente: "))

while num >=100:
    print("Erro! Apenas números menores que 100")
    num = int(input("Digite novamente: "))

a=1
b=1
soma=0

for i in range(0,num,1): #range ( parte do 0, vai até inteiro num, no passo 1 em 1 )  
    a=a+b
    b=b+2
    print("{a}")
    soma=soma+a

print("O resultado da soma dos N primeiros valores da sequência é: {soma}")
