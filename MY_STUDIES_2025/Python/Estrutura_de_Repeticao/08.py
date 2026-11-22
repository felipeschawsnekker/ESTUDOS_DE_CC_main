from random import randint
const=randint(1,100)
    
    

i=0

while(i<3):
    x=int(input(f"Adivinhe um número de 1 a 100 (tentativa {i}/3)"))

    if x>const :
        print("Muito alto!")
    elif (x<const) :
        print("Muito Baixo!")
    else :
        print("Igual")
        break
    i=i+1

print("O número é: ",const)        
    
