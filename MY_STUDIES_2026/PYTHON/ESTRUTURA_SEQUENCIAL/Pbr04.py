#Mostre a área de um trapézio

def geraAreaTrapezio(baseMaior,baseMenor,altura):
    return (((baseMaior+baseMenor)/altura)*2)
    
baseMaior=float(input("Base maior: "))
baseMenor=float(input("Base menor: "))
altura=float(input("Altura: "))

print("Área do seu trapézio: ",geraAreaTrapezio(baseMaior,baseMenor,altura))
