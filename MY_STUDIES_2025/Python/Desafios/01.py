x = int(input("Digite um numero: "))

n = 1
while n < x:
    i = 1
    d = 0
    s = 0
    while i < n:
        if n % i == 0:
            d = d + 1
            s = s + i
        i = i + 1
    if s == n:
        print(n)
    n = n + 1
