	print("Exibir a tabuada do 5 no intervalo de 1 a 10")
	
	num = int(input('Digite o número 5 para a tabuada: '))
	
	while num !=5:
	    print("Erro!Apenas o número 5")
	    num = int(input("Digite novamente: "))
	
	for i in range(1, 11, 1): #range ( parte do 1, vai até inteiro menor que 11, no passo 1 em 1)  
	    res = num * i
	    print('{num} x {i} = {res}')
