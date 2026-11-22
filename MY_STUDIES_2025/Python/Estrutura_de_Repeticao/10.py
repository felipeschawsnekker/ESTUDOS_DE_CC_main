#Monte um programa com um menu em loop até o usuário escolher sair:


print("1 - Mostrar contagem de 1 a 10")
print("2 - Mostrar números pares até 20")
print("3 - Calcular fatorial")
print("0 - Sair")
const=1;
j=int(input("Digite seu valor: "))

if(j==0):
    print("Saindo...")
    exit()
while j>0:
    
    if(j==1):
        for i in range (1,11):
            print(i,end=" ")
    if(j==2):
        for i in range (1,21):
            if(i%2==0):
                print(i,end=" ")
    if(j==3):
        a=int(input("Qual número você deseja fazer fatorial? "))
        i=1
        const=1
        while i<a:
            i=i+1
            const = const*i
        print("O fatorial é: ",const)
    if(j==0):
        print("Saindo...")
        exit()
    else: 
        j=int(input("\nDigite seu valor: "))
    
    
