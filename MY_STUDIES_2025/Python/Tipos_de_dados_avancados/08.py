
 
x=[]

for i in range (1,6):
    num=int(input(f"Digite o {i} número: "))
    x.append(num)

print("Lista: ",x)

new_x=sorted(list(x))

print("Lista em ordem crescente: ",new_x)
