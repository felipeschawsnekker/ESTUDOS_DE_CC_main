#define TAM 5
#include <iostream>
using namespace std;

struct Fila{
    int dados[TAM];
    int inicio;
    int fim;
    int qtd;
};

void Inicializar(Fila &f){
    f.inicio=0;
    f.fim=0;
    f.qtd=0;
}

bool Vazia(Fila &f){
    return f.qtd==0;
}

bool Cheia(Fila &f){
    return f.qtd==TAM;
}

void Enqueue(Fila &f,int valor){
    if (Cheia(f)){
        return;
    }
    f.dados[f.fim]=valor;
    f.fim++;
    f.qtd++;
}

int Dequeue(Fila &f){
    if (Vazia(f)){
        return -1;
    }
    int valor=f.dados[f.inicio];
    f.inicio++;
    f.qtd--;
    return valor;
}

void Mostrar(Fila f){
    if (Vazia(f)){
        cout<<"Fila vazia!";
        return;
    }
    for(int i=0; i<f.qtd; i++){
        cout<<f.dados[f.inicio + i]<<" ";
        if(i!=f.qtd-1){
            cout<<" ; ";
        }
    }
    cout<<endl;
}

void Menu(){
    int opcao;
    Fila f;
    Inicializar(f);

    while(true){
        cout<<"===================DIGITE UMA OPÇÃO==================="<<endl;
        cout<<"1-Inicializar Fila"<<endl;
        cout<<"2-Encher Fila"<<endl;
        cout<<"3-Mostrar Fila"<<endl;
        cout<<"4- Sair"<<endl;
        cin>>opcao;

        switch (opcao){
        case 1:
            Inicializar(f);
            break;

        case 2:
            for(int i=0; i<TAM; i++){
                int temp;
                cout<<"Valor "<<i+1<<": ";
                cin>>temp;
                Enqueue(f,temp);
                cout<<endl;
            }
            break;

        case 3:
            Mostrar(f);
            break;

        case 4:
            cout<<"Saindo...";
            return;

        default:
            cout<<"Opção Inválida"<<endl;
        }
    }
}

int main(){
    Menu();
    return 0;
}
