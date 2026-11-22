/* ✔ TAREFA DO PROGRAMA
Ler um número inteiro
Guardar esse valor usando ponteiro
Imprimir o valor e o endereço
Dobrar o valor usando ponteiro*/

#include <iostream>
using namespace std;

int main(){
    int x=10; //numero inteiro
    int *ptr; // ponteiro
    ptr = &x; // guarda o endereço de x;
    // *ptr = guarda o valor de X;

    cout<<"\nValor de X: "<<*ptr<<endl;
    cout<<"Endereço de X: "<<ptr<<endl;
    cout<<"Dobro de x: "<<2*(*ptr)<<endl;
}
