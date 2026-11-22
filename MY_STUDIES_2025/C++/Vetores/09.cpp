#include <iostream>
using namespace std;

int main() {
    int v[10];
    int cont[10] = {0}; // vetor de contagem

    // Leitura do vetor
    for (int i = 0; i < 10; i++) {
        cout << "Digite (" << i + 1 << "/10): ";
        cin >> v[i];
    }

    // Contagem de repetições usando vetor cont
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (v[i] == v[j]) {
                cont[i]++;
            }
        }
    }

    // Impressão dos resultados sem repetir números
    for (int i = 0; i < 10; i++) {
        bool jaMostrado = false;
        for (int j = 0; j < i; j++) {
            if (v[i] == v[j]) {
                jaMostrado = true;
                break;
            }
        }

        if (!jaMostrado) {
            cout << "O número " << v[i] << " aparece " << cont[i] << " vez(es)." << endl;
        }
    }

    return 0;
}
