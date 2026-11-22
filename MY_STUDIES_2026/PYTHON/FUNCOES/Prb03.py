#FuncaoSomaImposto(TaxaImposto em %,Custo)
#FuncaoAltera, altera para incluir o imposto sobre vendas

def somaImposto(TaxaImposto,Custo):
    taxaReal=0;
    taxaReal=1+(TaxaImposto/100.0)
    valorReal=Custo*taxaReal
    print(f"O valor com soma imposto é: R${valorReal}")
    return valorReal
    
somaImposto(30,100)
