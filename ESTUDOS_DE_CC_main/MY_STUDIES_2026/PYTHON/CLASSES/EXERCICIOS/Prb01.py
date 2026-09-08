class Casa:
    def __init__(self, cor, preco, area, comodos):
        self._cor = cor
        self._preco = preco
        self._area = area
        self._comodos = comodos
        
    def desconto(self, porcentagem):
        tempDesconto = self._preco * (porcentagem / 100)
        self._preco -= tempDesconto
        return self._preco

    def calcular_preco_metro_quadrado(self):
        if self._area > 0:
            return self._preco / self._area
        return 0

    def reformar(self, nova_cor, novos_comodos):
        self._cor = nova_cor
        self._comodos = novos_comodos
        return f"Reforma concluída! A casa agora é {self._cor} e tem {self._comodos} cômodos."

# Exemplo de uso:
minha_casa = Casa("Branca", 300000, 100, 5)

print(f"Preço com 10% de desconto: R$ {minha_casa.desconto(10):,.2f}")
print(f"Preço por m²: R$ {minha_casa.calcular_preco_metro_quadrado():,.2f}")
print(minha_casa.reformar("Azul", 6))
