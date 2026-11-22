def somar(x,y,z):
    s=x+y+z 
    return s 

try: 
    x,y,z=input().split()
    x,y,z=int(x),int(y),int(z)
    soma=somar(x,y,z)
    print("Soma=",soma)
except Exception as Erro:
    print(Erro)
