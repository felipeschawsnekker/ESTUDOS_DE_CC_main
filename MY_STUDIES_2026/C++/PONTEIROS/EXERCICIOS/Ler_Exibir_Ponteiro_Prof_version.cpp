/*Fazer um programa em C++ que leia um valor inteiro, armazene em um ponteiro e 
imprima o seu valor e o endereço de uma memória de armazenamento*/
#include <iostream>
using namespace std;

int main(){
    int x,*ptr;
    cout<<"Numero: "; cin>>x;
    ptr=&x;
    cout<<"O valor da variável X é: "<<*ptr<<endl;
    cout<<"O seu endereço é: "<<ptr<<endl;
    *ptr=x*2;
    cout<<"O dobro de X é: "<<*ptr<<endl;
}
