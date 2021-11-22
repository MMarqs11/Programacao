p = float(input('Digite o peso em Kg: '))
a = float(input('Digite a altura em m: '))
sexo = str(input('Digite o sexo M ou F: '))

imc = p/(a*a)

print("O IMC é: {imc:.2f}")

#Condicional feminino
if ((sexo == 'f') or (sexo =='F')):
 print("Resultado para o sexo feminino:")
elif imc<19:
 print("Abaixo do peso!")
elif imc>=19 and imc<24:
 print("Peso ideal")
else:
 print("Acima do peso!")

#Condicional masculino
if ((sexo == 'm') or (sexo =='M')):
 print("Resultado para o sexo masculino:")
if imc<20:
 print("Abaixo do peso")
elif imc>=20 and imc<25:
 print("Peso ideal")
else:
 print("Acima do peso!")
