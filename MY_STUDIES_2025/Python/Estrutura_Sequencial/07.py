x=int(input("Digite um numero: "))
i=1 
d=0

print("=:="*20)
print("Os divisores são: ")
while i<=x :
    if x%i==0 :
        d=d+1
        print(i)
    i=i+1  
print("=:="*20)
    
    
if(d==2) : 
    print(x," É primo")

else :
    print(x," Não é primo ")
