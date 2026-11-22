//Dada as operações I(Insere) e R(Remove), escreva a configuração inicial da pilha apos
//I(10), I(20), R, I(30), I(45), I(21), R, R

#include <iostream>
#include <stack>
using namespace std;

stack<float> P; // Pilha Global

void InserirPilha(float N){
    P.push(N);
}

void RemoverPilha(){
    if(!P.empty()){
        P.pop();
    }
}

int main(){
    InserirPilha(10);
    InserirPilha(20);
    RemoverPilha();
    InserirPilha(30);
    InserirPilha(45);
    InserirPilha(21);
    RemoverPilha();
    RemoverPilha();
    
    while (!P.empty()){
        cout << P.top() << endl;
        P.pop();
    }
}

