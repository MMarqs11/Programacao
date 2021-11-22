print("Exibir a tabuada do 1 ao 20 no intervalo do 1 ao 10")

num = int(input('Digite um número do intervalo: '))

while num <=0 or num>10:
    print("Erro! Apenas valores do intervalo")
    num = int(input("Digite novamente: "))

for i in range(1,21,1): #range ( parte do 1, vai até inteiro menor que 21, no passo 1 em 1 )  
    res = num * i
    print('{num} x {i} = {res}')
