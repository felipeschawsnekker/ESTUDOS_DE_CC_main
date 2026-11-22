def divisores(a):
    const_s1=0
    const_s2=0
    i=1
    
    while i<=a:
        if(a%i==0):
            if(i%2==0):
                const_s2+=i
            else:
                const_s1+=i
        i+=1
    return const_s1,const_s2

a=int(input("Digite um número inteiro: "))

const_s1,const_s2=divisores(a)
print("Soma dos divisores ímpares: ",const_s1)
print("Soma dos divisores pares: ",const_s2)
