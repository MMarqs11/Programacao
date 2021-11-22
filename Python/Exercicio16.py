v1 = int(input('Digite o Primeiro Valor: '))
v2 = int(input('Digite o Segundo Valor: '))
v3 = int(input('Digite o Terceiro Valor: '))

m = (v1+v2)
n = (v1+v3)
o = (v2+v3)
 
if m>v3 and n>v2 and o>v1:
 print("Valores satisfazem a condição de retângulo")
else:
 print("Valores não satisfazem a condição de retângulo!")

if v1==v2 and v2==v3:
 print("Triângulo Equilátero")

elif v1==v2 or v2==v3 or v1==v3:
 print("Triângulo Isósceles")

elif v1!=v2 and v1!=v3 and v2!=v3:
 print("Triângulo Escaleno")
