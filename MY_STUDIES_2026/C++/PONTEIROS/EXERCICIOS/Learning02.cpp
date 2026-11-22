/* Faça um programa que imprima:

o endereço de uma variável int x
o endereço do ponteiro p
o valor de p
o valor de *p

Explique porque todos esses endereços são diferentes.*/

#include <iostream> 
using namespace std;

int main(){
    int x=5;
    int *p=&x;
    cout<<"Endereço da variável x: "<<&x<<endl;
    cout<<"Endereço do ponteiro P: "<<&p<<endl;
    cout<<"Valor de P: "<<p<<endl;
    cout<<"Valor de *p: "<<*p<<endl;
}
