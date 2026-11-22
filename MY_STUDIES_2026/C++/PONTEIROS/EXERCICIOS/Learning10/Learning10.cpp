/* Ponteiro para ponteiro
Dado
int x = 10;
int *p = &x;
int **pp = &p;
Imprima:
valor de x usando pp
endereço de x usando pp
endereço de p usando pp
Só pode usar pp e seus desreferenciamentos.*/

#include <iostream>
using namespace std;

int main(){
    int x=10;
    int *p=&x;
    int **pp=&p;

    cout<<"X: "<<x<<endl;
    cout<<"&X: "<<&x<<endl;
    cout<<"P: "<<p<<endl;
    cout<<"*P: "<<*p<<endl;
    cout<<"&P: "<<&p<<endl;
    cout<<"PP: "<<pp<<endl; // pp = &p
    cout<<"*PP: "<<*pp<<endl; // *pp == p == &x
    cout<<"**PP: "<<**pp<<endl; // **pp = *p = x;
    cout<<"&PP: "<<&pp<<endl;
}
