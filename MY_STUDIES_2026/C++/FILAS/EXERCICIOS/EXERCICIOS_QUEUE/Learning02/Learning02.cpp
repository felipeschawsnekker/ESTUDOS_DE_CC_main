#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> F1, F2;

    F1.push(1);
    F1.push(4);
    F1.push(3);
    F1.push(2);
    F1.push(10);
    F1.push(11);
    //1 4 3 2 10 11 
    //front = 1
    //back = 11
    
    int n = F1.size();

    while (n > 0) {

        int menor = F1.front();

        // Procura o menor entre os n elementos
        for (int i = 0; i < n; i++) {
            if (F1.front() < menor)
                menor = F1.front();

            F1.push(F1.front());
            F1.pop();
        }

        // Move os elementos para o final,
        // retirando apenas uma ocorrência do menor
        int cont = 0;

        for (int i = 0; i < n; i++) {

            if (F1.front() == menor && cont == 0) {
                cont++;
            }
            else {
                F1.push(F1.front());
            }

            F1.pop();
        }

        F2.push(menor);
        n--;
    }

    cout << "Fila ordenada: ";

    while (!F2.empty()) {
        cout << F2.front() << " ";
        F2.pop();
    }

    return 0;
}
