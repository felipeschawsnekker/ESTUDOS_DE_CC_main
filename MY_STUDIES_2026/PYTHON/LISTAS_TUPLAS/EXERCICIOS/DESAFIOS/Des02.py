
tuplaT=(-10,90,50,40)
print("TUPLA ANTIGA:")
print(tuplaT)
#Trocar o n* 50 por -89

temp=list(tuplaT)
try:
    del temp[2]
    temp.insert(2,-89)
    print("TUPLA ATUALIZADA: ")
    temp2=tuple(temp)
    print(temp2)
except IndexError:
    print("Não foi possível atualizar...")
