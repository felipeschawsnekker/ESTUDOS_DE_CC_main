#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
    int *p; //Declara um ponteiro para inteiro
    p=(int*)malloc(sizeof(int)); // Converte o retorno de malloc para ponteiro de inteiro 
    //Reserva memória suficiente para um inteiro
    *p=20;
    cout<<"Valor armazenado: "<<*p;
    free(p);
    return 0;
}
