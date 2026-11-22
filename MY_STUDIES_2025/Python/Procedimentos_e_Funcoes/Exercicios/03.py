#Faça um programa com uma função chamada SomaImposto. 
#A funçãopossui dois parâmetros formais: Taxa Imposto, que é a quantia de imposto 
#Sobre vendas expressa em porcentagem e custo, que é o custo de um item
#antes do imposto
#A função altera o valor de custo para incluir o imposto sobre vendas

def SomaImposto(taxa_imposto,custo,percent):
    taxa_imposto=custo*percent/100.0
    return taxa_imposto
    
    
taxa_imposto=0
custo=float(input("Digite o custo: "))
percent=float(input("Digite a porcentagem: % "))

print("O imposto é: R$",SomaImposto(taxa_imposto,custo,percent,))
print("O valor com imposto é: R$",SomaImposto(taxa_imposto,custo,percent,)+custo)
