base=float(input("Digite o Valor da Base: "))
altura=float(input("Digite o Valor da Altura: "))

area = base*altura

if area>=100:
    print("O Valor da Área é de:",area)
    print("Terreno Grande!")
else:
     print("O Valor da Área é de:",area)
     print("Terreno Pequeno!")