P1 = "casamento"
P2 = "casa"
print(":=:" * 20)

if P1 == P2:
    print("\nPalavra {} é igual a {}".format(P1, P2))
else:
    print("\nPalavra {} é diferente a {}".format(P1, P2))

print(":=:" * 20)

print("\nVerifique se uma palavra é uma substring da outra\n")

i1 = P1.find(P2)
i2 = P2.find(P1)

if i1 != -1:
    print("\nA palavra {} é substring de {} na posição {}".format(P2, P1, i1))
else:
    print("\nA palavra {} não é substring de {}".format(P2, P1))

if i2 != -1:
    print("\nPalavra {} é substring de {} na posição {}".format(P1, P2, i2))
else:
    print("\nPalavra {} não é substring de {}".format(P1, P2))
