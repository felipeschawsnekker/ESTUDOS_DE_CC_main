#Peça ao usuário um número e verifique se ele é primo (divisível apenas por 1 e por ele mesmo).

x=int(input("Digite um número: "))
cont=0
for i in range(1,x+1):
      if x%i==0:
        cont=cont+1
if cont>2:
  print("O número não é primo")
else:
  print("O número é primo")
        
