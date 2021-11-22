	a  = float(input('Digite a aceleração em m/s2: '))
	V0 = float(input('Digite a Velocidade Inicial em m/s: '))
	t  = float(input('Digite o tempo de percurso em segundos: '))
	
	V = V0 + a*t
	print("A Velocidade Final é: {V:.1f}km/h")
	
	if V<=40:
	  print("Veículo muito lento")
	elif V>40 and V<60:
	  print("Velocidade permitida")
	elif V>60 and V<=80:
	 print("Velocidade de cruzeiro")
	elif V>80 and V<=120:
	 print("Veículo rápido")
	elif V>120:
	 print("Velocidade muito rápido!")


    p1 = float(input('Digite a nota da P1: '))
	p2 = float(input('Digite a nota da P2: '))
	
	media = (p1 + p2*2)/3
	print("A Nota Final é:{media: .2f}")
	
	if media>=5:
	  print("Aprovado!")
	else:
	  print("Reprovado!")