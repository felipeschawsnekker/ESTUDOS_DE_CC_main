
a=float(input(("Digite o primeiro número: ")))
s=str(input(("Digite o sinal (+,-,/,*,^): ")))
b=float(input(("Digite o primeiro número: ")))
result=None

if s=='+':
    result=a+b
elif s=='-':
    result=a-b
elif s=='/':
    if(b!=0):
        result=a/b
    else:
        print("Divisão por 0. Inválido.")
        exit()
        
elif s=='*':
    result=a*b
elif s=='^':
    result=a**b
else:
    print("Sinal inválido, tente novamente")
    exit()
    

print(f"O resultado é: {result}")




    
