#include <iostream>
#include <chrono>

using namespace std;

int main() {
    long long n, i, j;
    
    cout << "Digite o tamanho N da matriz: ";
    cin >> n;
    
    cout << "Posicao I: ";
    cin >> i;
    
    cout << "Posicao J: ";
    cin >> j;

    // INICIO DA MEDICAO O(1) - Sem laços, sem percorrer nada
    auto inicio = chrono::high_resolution_clock::now();

    int valor = 0;
    
    // Verifica se a posicao esta dentro dos limites da matriz
    if (i >= 0 && i < n && j >= 0 && j < n) {
        // Logica da matriz identidade com if/else
        if (i == j) {
            valor = 1; // Diagonal principal
        } else {
            valor = 0; // Demais posicoes
        }
    } else {
        valor = -1; // Indicador de posicao invalida fora de N
    }

    auto fim = chrono::high_resolution_clock::now();
    // FIM DA MEDICAO O(1)

    auto tempo_ns = chrono::duration_cast<chrono::nanoseconds>(fim - inicio).count();

    // Exibicao dos resultados
    cout << "\n--- ANALISE ---" << endl;
    if (valor == -1) {
        cout << "Erro: A posicao (" << i << "," << j << ") esta fora dos limites da matriz " << n << "x" << n << "!" << endl;
    } else {
        cout << "Posicao (" << i << "," << j << ") = " << valor << endl;
    }
    cout << "Tempo de execucao: " << tempo_ns << " ns" << endl;
    cout << "Complexidade de Tempo: O(1) (Constante, nao importa se N e 3 ou 1.000.000)" << endl;
    cout << "Complexidade de Espaco: O(1) (Apenas variaveis locais)" << endl;

    return 0;
}
