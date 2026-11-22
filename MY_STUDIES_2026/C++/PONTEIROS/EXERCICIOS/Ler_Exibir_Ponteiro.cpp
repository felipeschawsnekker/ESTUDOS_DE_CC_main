//Fazer um programa em C++ que leia um valor inteiro, armazene em um ponteiro e imprima o seu valor e o endereço de uma memória de armazenamento

#include <iostream>
using namespace std;

void LerValor(float *e){
cout<<"Digite um número qualquer: "; cin>>*e;
}

void ExibirValor(float *e){
cout<<"O valor é: "<<*e<<endl;
cout<<"Seu endereço é: "<<&e<<endl;
}

int main(){
float *e;
LerValor(e);
ExibirValor(e);
}
