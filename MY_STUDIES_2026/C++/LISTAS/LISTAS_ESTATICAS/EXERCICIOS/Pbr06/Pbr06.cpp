/*Inserir em uma listas N notas de uma classe e mostrar as notas e a média da classe */

#include <iostream>
using namespace std;

#define N 3
struct Notas{
    double notas[N];
    int tamanho;
};

double soma = 0;

void Init(Notas *n){
    n->tamanho = 0;
    soma = 0;
}

void Add(Notas *n, double value){

    n->notas[n->tamanho] = value;
    n->tamanho++;

    soma += value;
}

void Show(Notas *n){

    if(n->tamanho == 0){
        cout << "Pilha vazia" << endl;
        return;
    }

    cout << "Notas: ";

    for(int i = n->tamanho - 1; i >= 0; i--){
        cout << n->notas[i] << " ";
    }

    cout << endl;
}

double Media(Notas *n){

    if(n->tamanho == 0) return 0;

    return soma / n->tamanho;
}

void Menu(Notas *n){

    int op;
    bool preenchido = false;

    do{

        cout << endl;
        cout << "======= SISTEMA DE NOTAS =======" << endl;

        if(!preenchido){
            cout << "1 - Adicionar todas as notas" << endl;
        }

        cout << "2 - Mostrar notas" << endl;
        cout << "3 - Mostrar media" << endl;
        cout << "0 - Sair" << endl;

        cin >> op;

        switch(op){

            case 1:

                if(preenchido){
                    cout << "Notas ja foram inseridas!" << endl;
                    break;
                }

                cout << "Digite " << N << " notas:" << endl;

                while(n->tamanho < N){

                    double valor;
                    cin >> valor;

                    Add(n, valor);
                }

                preenchido = true;

                break;

            case 2:
                Show(n);
                break;

            case 3:
                cout << "Media: " << Media(n) << endl;
                break;

            case 0:
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    }while(op != 0);
}

int main(){

    Notas n;

    Init(&n);

    Menu(&n);

    return 0;
}
