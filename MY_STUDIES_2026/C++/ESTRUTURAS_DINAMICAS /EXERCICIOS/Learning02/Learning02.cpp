/*
Alocação de um array de inteiros

Objetivo: ler um número n do usuário e criar um array de n elementos.
Preencher o array com valores (i*2) e imprimir.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"Digite o número de elementos do array: "; cin>>n;
    int *ptr=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        ptr[i]=i*2;
    }

    cout<<"\n======Valores de PTR======\n";
    for(int i=0; i<n; i++){
        cout<<"Valor ["<<i+1<<"]: "<<ptr[i]<<endl;
    }
}
