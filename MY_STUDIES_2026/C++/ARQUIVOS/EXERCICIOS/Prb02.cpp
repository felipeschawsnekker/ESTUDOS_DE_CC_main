#include <cstdio>

int main() {
    FILE *f = fopen("frase.txt", "w");

    for (char c : "Ola, mundo!") {
      putc(c, f);
    }
    fclose(f);

    f = fopen("frase.txt", "r");
    while (int c = getc(f)) {
        if (c == EOF) break;
        putchar(c);
    }
    fclose(f);

    return 0;
}
