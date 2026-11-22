from random import randint

def aleatorio():
    return randint(1,1000)
    


i=1

c=aleatorio()
while(i<=10):
    x=int(input(f"Digite um número de 1 a 1000 (Chance {i}/10): "))
    
    if x==c:
        print("Você acertou.")
        exit()
    elif i<10:
        print("Tente novamente")
    else :
        print("=:="*20)
        print("Chances acabaram")
        print("O numero era: ",c)
        exit()
        
    i+=1
    
