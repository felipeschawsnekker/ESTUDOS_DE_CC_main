#Definir todos os numeros primos entre dois numeros


def isPrimo(num):
    div=0
    for i in range (1,num+1):
       
        if(num%i==0):
            div=div+1
            
    if(div==2):
        return num
        
    

lista=[]       
def geraPrimo(num1,num2):
    for i in range(num1,num2+1):
        if(isPrimo(i)!=None):
            lista.append(isPrimo(i))
    print(f"Os numeros primos compreendidos entre {num1} e {num2} são: ")
    print(lista)


x=int(input("Digite um numero inteiro: "))
y=int(input("Digite um segundo numero inteiro: "))


geraPrimo(x,y)

        
