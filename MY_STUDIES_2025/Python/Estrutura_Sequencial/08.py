x=int(input("Digite um numero: "))
i=1 
d=0
s=0
print("=:="*20)
print("Os divisores são: ")
while i<x :
    if x%i==0 :
        d=d+1
        print(i)
        
        s=s+i
    i=i+1 
print(x)
print("=:="*20)
    
 
   
if(s==x) :
    print("O numero é perfeito")
else :
    print("O numero não é perfeito")
