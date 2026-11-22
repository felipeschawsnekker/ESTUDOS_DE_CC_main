#Questão: Crie uma função recursiva que calcule o fatorial de um número n.

def fatorial(x):
  if(x==0):
    return 1
  else: 
    return x*fatorial(x-1)

print("=="*10)

while True: 
    try:
        x=int(input("Digite um número N: "))

        print("Fatorial: {}! = {} ".format(x,fatorial(x)))
    
    except KeyboardInterrupt:
            print("\nFim. ")
            break
    
    except Exception as Erro:
            print(Erro)
