matriz = []

m = int(input("Digite a ordem da matriz: "))
if m > 10:
print("A matriz não pode ser maior que 10x10")
else:
n = int(input("Digite a ordem da matriz: "))
if n > 10:
        print("A matriz não pode ser maior que 10x10")
else:
for i in range(m):
linha = []
for j in range(n):
linha.append(int(input("Digite o valor da posição: ")))

busca = int(input("Digite o valor a ser buscado: "))

for i in range(m):
for j in range(n):
if matriz[i][j] == busca:
print("O valor %d se encontra na posição %d, %d" % (busca, i, j))
else:
print("O valor %d não se encontra na matriz" % busca)

print("Deseja fazer nova consulta? (S/N)")
resp = input()
resp = resp.upper()
if resp == "S":
busca = int(input("Digite o valor a ser buscado: "))
for i in range(m):
for j in range(n):
if matriz[i][j] == busca:
print("O valor %d se encontra na posição %d, %d" % (busca, i, j))
else:
print("O valor %d não se encontra na matriz" % busca)
else:
print("Obrigado por utilizar o programa")
