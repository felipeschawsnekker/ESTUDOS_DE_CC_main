/* Mude o valor de uma variável usando int **
Escreva uma função:
void altera(int **pp, int novoValor);
Que altere a variável original acessando-a por duplo ponteiro.*/


void altera(int **pp, int newValue){
    **pp=newValue;
}
#include <iostream>
using namespace std;
int main(){
    int v=10;
    int *p=&v;
    int **pp=&p;
    // **pp = *p = 10;
    cout<<"Antigo valor de V: "<<v;
    cout<<"PP: "<<pp<<endl; // pp = &p
    cout<<"*PP: "<<*pp<<endl; // *pp == p == &x
    cout<<"**PP: "<<**pp<<endl; // **pp = *p = x;
    altera(pp,5);
    cout<<"Novo valor de V: "<<v;
}

