/* Leia uma frase e imprima ela ao contrário usando pilha
Pega cada char e empilha.*/
#include <iostream>
using namespace std;

const int tam = 50;

struct Frase{
    int topo;
    char dados[tam];
};

void init(Frase &f){
    f.topo = -1;
}

void push(Frase &f, char c){
    if(f.topo == tam - 1){
        cout << "Frase cheia" << endl;
        return;
    }
    f.dados[++f.topo] = c;
}

char pop(Frase &f){
    if(f.topo == -1){
        return '\0';
    }
    return f.dados[f.topo--];
}

int main(){
    Frase f;
    init(f);

    char word[tam];

    cout << "Digite uma frase: ";
    cin.getline(word, tam);

    // Empilha cada caractere real (até \0)
    for(int i = 0; word[i] != '\0'; i++){
        push(f, word[i]);
    }

    cout << "Frase invertida: ";
    while(f.topo != -1){
        cout << pop(f);
    }

    cout << endl;
    return 0;
}
