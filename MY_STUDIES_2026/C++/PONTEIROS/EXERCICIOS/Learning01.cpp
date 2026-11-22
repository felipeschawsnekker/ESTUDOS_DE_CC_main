/* Crie um programa que:
declare um inteiro x
declare um ponteiro p
faça p apontar para x
altere o valor de x usando *p
imprima x antes e depois*/

#include <iostream>
using namespace std;



int main(){
    int x=15; // variavel
    int *ptr=&x; // ponteiro
    cout<<"X antes: "<<x;
    *p=30;
    cout<<"X depois: "<<x;

}
