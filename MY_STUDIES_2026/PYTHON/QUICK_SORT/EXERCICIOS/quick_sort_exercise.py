def quick_sort(v, inicio, fim):
    if inicio >= fim:
        return

    pivo = v[(inicio + fim) // 2]
    i = inicio
    j = fim

    while i <= j:

        while v[i] < pivo:
            i += 1

        while v[j] > pivo:
            j -= 1

        if i <= j:
            v[i], v[j] = v[j], v[i]
            i += 1
            j -= 1

    if inicio < j:
        quick_sort(v, inicio, j)

    if i < fim:
        quick_sort(v, i, fim)


v = [8, 2, 7, 3, 5, 1, 6, 4]

quick_sort(v, 0, len(v) - 1)

print(v)
