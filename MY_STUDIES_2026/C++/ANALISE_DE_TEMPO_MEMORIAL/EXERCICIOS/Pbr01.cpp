#include <iostream>
#include <chrono>

using namespace std;

int main() {
    int n, i, j;
    
    cout<<"Digite o tamanho N da matriz: ";
    cin>>n;
    
    cout<<"Posicao I: ";
    cin>>i;
    
    cout<<"Posicao J: ";
    cin>>j;

    auto inicio=chrono::high_resolution_clock::now();

    int valor=0;
    
    if (i>=0 && i<n && j>=0 && j<n) {
        if (i==j) {
            valor=1;
        } else {
            valor=0;
        }
    } else {
        valor=-1;
    }

    auto fim=chrono::high_resolution_clock::now();

    auto tempo_ns=chrono::duration_cast<chrono::nanoseconds>(fim - inicio).count();

    cout<<"\n--- ANALISE ---"<<endl;
    if (valor==-1) {
        cout<<"Erro: A posicao ("<<i<<","<<j<<") esta fora dos limites da matriz "<<n<<"x"<<n<<"!"<<endl;
    } else {
        cout<<"Posicao ("<<i<<","<<j<<") = "<<valor<<endl;
    }
    cout<<"Tempo de execucao: "<<tempo_ns<<" ns"<<endl;

    return 0;
}
