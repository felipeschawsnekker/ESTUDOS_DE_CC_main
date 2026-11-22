/* (Ponteiros + Passagem por valor, referência e por ponteiro)

Crie três funções que calculam soma, subtração, produto e quociente de dois números:

Função 1: recebe por valor
Função 2: recebe por referência
Função 3: recebe por ponteiro
No main(), explique quais delas alteram a variável da função chamadora e por quê.*/
#include <iostream>
using namespace std;
int Soma(int a, int b){
    return a+b;
}

int Subtracao(int &a, int &b){
    return a-b;
}

int Quociente(int *a, int *b){
    if(b==0){
        cout<<"Inválido"<<endl;
        return -1;
    }
    else{
        return (*a)/(*b);
    }
}

int Produto(int *a, int *b){
    return (*a)*(*b);
}

int main(){
    int a=3,b=6;
    cout<<"Soma: "<<Soma(a,b)<<endl; // Valor


    cout<<"Subtração: "<<Subtracao(a,b)<<endl; // Referência
    int *ptrA=&a;
    int *ptrB=&b;
    cout<<"Quociente: "<<Quociente(ptrA,ptrB)<<endl; // Ponteiro
    cout<<"Produto: "<<Produto(ptrA,ptrB)<<endl; // Ponteiro
    return 0;
}
