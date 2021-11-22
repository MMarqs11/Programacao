vetor1 = []
vetor2 = []

for i in range(0,3,1): #range ( parte do 0, vai até inteiro menor que 20, no passo 1 em 1 )  
    v1 = int(input('Digite um número: '))
    vetor1.append(v1)
   
cte = int(input('Digite o valor da constante: '))

print('O vetor 1 digitado foi: ')
for i in range (0,3,1): 
    print(vetor1[i])

print('O resultado no vetor 2 é: ')
for i in range(0,3,1):
    res = cte*vetor1[i]
    vetor2.append(res)
    print(vetor2[i])
