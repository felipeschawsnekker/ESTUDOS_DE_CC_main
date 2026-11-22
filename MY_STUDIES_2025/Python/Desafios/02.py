inicio = int(input("Digite o número inicial: "))
fim = int(input("Digite o número final: "))

n = inicio
while n <= fim:
    i = 2
    d = 0
    if n > 1:
        while i < n:
            if n % i == 0:
                d = d + 1
            i = i + 1
        if d == 0:
            print(n)
    n = n + 1
