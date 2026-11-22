// Fazer um vetor para ordenar um vetor com 6 nomes.
// Os nomes serão informados via getline e classificados em ordem crescente.

#include <iostream>
#include <string>
using namespace std;

void ordenarVetor(string *vetorNomes, int tamanhoDoVetor){
    for(int i = 0; i < tamanhoDoVetor; i++){
        for(int j = 0; j < tamanhoDoVetor - 1 - i; j++){
            if(vetorNomes[j] > vetorNomes[j+1]){
                string temp = vetorNomes[j];
                vetorNomes[j] = vetorNomes[j+1];
                vetorNomes[j+1] = temp;
            }
        }
    }

    cout << "\n=== Vetor ordenado ===\n";

    for(int i = 0; i < tamanhoDoVetor; i++){
        cout << vetorNomes[i] << endl;
    }
}

int main(){

    string vetorNomes[6];

    cout << "Digite os nomes abaixo:" << endl;

    for(int i = 0; i < 6; i++){
        getline(cin, vetorNomes[i]);
    }

    ordenarVetor(vetorNomes, 6);

    return 0;
}
