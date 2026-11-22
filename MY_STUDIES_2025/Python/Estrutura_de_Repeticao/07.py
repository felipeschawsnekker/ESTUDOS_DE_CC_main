n = int(input("Quantos números da Fibonacci você quer? "))

a = 0
b = 1
i = 0  # contador

while i < n:
    print(a, end=" ")   # imprime o número atual
    c = a + b           # próximo número da sequência
    a = b               # atualiza a
    b = c               # atualiza b
    i += 1              # incrementa o contador
