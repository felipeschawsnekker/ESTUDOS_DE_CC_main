#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    FILE *f = fopen("Arque03.txt", "w");
    if (f != nullptr) {
        fputs("teste.\n", f);
        fclose(f);
    }

    f = fopen("texto.txt", "r");
    if (f != nullptr) {
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), f) != nullptr) {
            cout << buffer;
        }
        fclose(f);
    }

    return 0;
}
