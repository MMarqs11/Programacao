n1=float(input("Digite o Primeiro Número: "))
n2=float(input("Digite o Segundo Número: "))
n3=float(input("Digite o Terceiro Número: "))

if n1>n2 and n1>n3:
    print("O Maior Número é:",n1)
elif n2>n1 and n2>n3:
    print("O Maior Número é:",n2)
else:
    print("O Maior Número é:",n3)