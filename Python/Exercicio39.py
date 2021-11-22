matriz = []

for i in range(3):
linha = []

for j in range(4):
linha.append(int(input('Digite um valor para [{i}, {j}]: ')))
matriz.append(linha)
multiplicador = int(input('Digite um valor para multiplicar: '))

for i in range(3):

for j in range(4):
matriz[i][j] *= multiplicador

print(matriz)