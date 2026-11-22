#Faça um programa que verifique quais os números compreendidos no intervalo
#N1 a N2 e são multiplos de 7:

N1=int(input("Digite o primeiro intervalo: "))
N2=int(input("Digite o segundo intervalo: "))


for i in range (N1,N2+1):
    if(i%7==0):
        print(f"O numero {i} é multiplo de 7")
