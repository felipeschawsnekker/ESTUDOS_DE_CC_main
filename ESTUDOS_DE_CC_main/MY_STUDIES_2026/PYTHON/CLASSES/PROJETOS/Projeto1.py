#Calcular o IMC(INDICE DE MASSA CORPORAL)

def calculaIMC(peso,altura):
    if(peso>0 and altura>0):
        return peso/(altura**2)
    else:
        print("Use valores válidos")
        return
    
def classificaIMC(imc):
    if(imc<16.0):
        return("Magreza Grave")
    elif(imc>=16.0 and imc<17.0):
        return("Magreza Moderada")
    elif(imc>=17.0 and imc<=18.5):
        return("Magreza Leve")
    elif(imc>=18.5 and imc<25.0):
        return("Saudável")
    elif(imc>=25.0 and imc<30.0):
        return("Sobrepeso")
    elif(imc>=30.0 and imc<35.0):
        return("Obesidade Grau I")
    elif(imc>=35.0 and imc<40.0):
        return("Obesidade Grau II")
    elif(imc>=40):
        return("Obesidade grau III")

class Pessoa:
    def __init__(self,peso,altura):
        self.altura=altura
        self.peso=peso
        
def classificaPessoa(pessoaI):
    imcCalculado=calculaIMC(pessoaI.peso,pessoaI.altura)
    if(imcCalculado!=None):
        print(f"IMC: {round(imcCalculado,2)}, CLASSIFICAÇÃO: {classificaIMC(imcCalculado)}")

while(True):
    try:
        peso=float(input("Digite o peso: "))
        altura=float(input("Digite a altura: "))
        pessoaTeste=Pessoa(peso,altura)
        classificaPessoa(pessoaTeste)
        print("FINALIZANDO TESTE...\n")
    except ValueError:
        print("Valor inválido. Tente novamente.\n")
