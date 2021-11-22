print("Solicitar o segundo valor maior que o primeiro")

v1 = int(input('Digite o primeiro valor: '))
v2 = int(input('Digite o segundo valor: '))

while v2<=v1:
 print("Erro! O primeiro valor é maior que o segundo.")
 v2 = int(input("Digite novamente: "))

print("Você digitou: {v2} Obrigado!") 
