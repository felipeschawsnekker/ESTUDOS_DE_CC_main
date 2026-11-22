
x=[]
soma=0;
for i in range (4):
    
    a=float(input((f"Número {i+1}: ")))
    x.append(a)
    soma+=x[i]

print ("NOTAS: ",x)
print ("MÉDIA: ",soma/4.0)
