print("Exibir a tabuada do intervalo definido de forma decrescente")

num = int(input('Digite um número positivo para a tabuada: '))

while num <=0:
    print("Erro! Apenas números positivos")
    num = int(input("Digite novamente: "))

A = int(input('Digite o início do intervalo da tabuada: '))
B = int(input('Digite o fim do intervalo da tabuada: '))

while B<A:
    print("Erro! Fim do intervalo deve ser maior que o início")
    B = int(input("Digite novamente o fim do intervalo: "))

for i in range(B, A-1, -1): #range ( parte do B, vai até inteiro A, no passo -1 )  
    res = num * i
    print('{num} x {i} = {res}')
