/* 1) (Ponteiros + Operador &)

Escreva um programa em C++ que:
a) declare três variáveis inteiras e um ponteiro inteiro
b) imprima o valor e o endereço das três variáveis usando &
c) faça o ponteiro apontar para cada uma das variáveis
d) imprima o conteúdo apontado usando *ptr
*/

#include <iostream>
using namespace std;

int main(){
    int a=3;
    int b=5; 
    int c=4;
    int *ptr;
    cout<<"Valor A: "<<a<<" | Endereço: "<<&a<<endl;
    cout<<"Valor B: "<<b<<" | Endereço: "<<&b<<endl;
    cout<<"Valor C: "<<c<<" | Endereço: "<<&c<<endl;
    ptr=&a;
    cout<<"Valor ptrA: "<<*ptr<<" | Endereço: "<<ptr<<endl;
    ptr=&b;
    cout<<"Valor ptrB: "<<*ptr<<" | Endereço: "<<ptr<<endl;
    ptr=&c;
    cout<<"Valor ptrC: "<<*ptr<<" | Endereço: "<<ptr<<endl;
}
