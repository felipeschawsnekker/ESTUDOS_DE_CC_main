#PBR09 CONTAGEM DE VOGAIS EM PALAVRAS
#RECEBA UMA LISTA DE PALAVRAS E CRIE UMA TUPLA 
#CONTENDO O NÚMERO DE VOGAIS EM CADA UMA

def vogaisPorPalavra(palavra):
    caracteres=list(palavra)
    tempListaVogais=[]
    contA=0
    contE=0
    contI=0
    contO=0
    contU=0
    for i in caracteres:
        if(i=="A" or i=="a"):
            tempListaVogais.append(i)
            contA+=1
        elif(i=="E" or i=="e"):
            tempListaVogais.append(i)
            contE+=1
        elif(i=="I" or i=="o"):
            tempListaVogais.append(i)
            contI+=1
        elif(i=="O" or i=="o"):
            tempListaVogais.append(i)
            contO+=1
        elif(i=="U" or i=="u"):
            tempListaVogais.append(i)
            contU+=1
    
    listaCont=["Letra A: "+str(contA)+" | Letra E: "+str(contE)+" | Letra I: "+str(contI)+" | Letra O:  "+str(contO)+" | Letra U: "+str(contU)]
    listaCont=tuple(listaCont)
    print(listaCont)
    print(tempListaVogais)
         

        
vogaisPorPalavra("AKSLPAUEIO23U8E8023YHRMLWEMU3RWENFKSDFVBH")
