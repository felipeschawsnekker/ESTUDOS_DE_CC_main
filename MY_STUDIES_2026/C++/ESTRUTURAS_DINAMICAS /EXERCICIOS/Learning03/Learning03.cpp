/*Alocação com calloc

Objetivo: criar um array de 10 inteiros usando calloc.
Verificar que todos os elementos são inicializados com 0.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

const int x=10;

int *ptr=(int*)calloc(x,sizeof(int));


void ExibirArray(){
    for(int i=0; i<x; i++){
        cout<<"Valor ["<<i+1<<"]: "<<ptr[i]<<endl;
    }
}

void BooleanArray(){
    for(int i=0; i<x; i++){
        if(ptr[i]==0){
            cout<<"O array["<<i+1<<"] é nulo"<<endl;
        }
    }
}

int main(){
    ExibirArray();
    BooleanArray();
    free(ptr);
    return 0;
}
