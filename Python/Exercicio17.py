	a = int(input('Digite o valor A: '))
	b = int(input('Digite o valor B: '))
	c = int(input('Digite o valor C: '))

	m = (b*b) + (c*c)
	n = (a*a) + (c*c)
	o = (a*a) + (b*b)
	p = (a*a)
	q = (b*b)
	r = (c*c)
	
	if m==p or n==q or o==r:
	 print("Triângulo Retângulo")
	else:
	 print("Valores informados não formam um triângulo retângulo!")
