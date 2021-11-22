print("Criar uma rotina que aceite somente valor positivo")

num = int(input('Digite um valor positivo: '))

while num <=0:
 print("Erro! Apenas valor positivo.")
 num = int(input("Digite novamente: "))

print("Você digitou: {num} Obrigado!") 