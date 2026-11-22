/* Encontrar o maior elemento
Criar um array dinamicamente e escrever uma função que retorna um ponteiro para o maior elemento.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int *PreencherArray(int *ptr){
    int *maior=ptr;
    for(int i=0; i<12; i++){
        int num=(rand()%100)+1;
        ptr[i]=num;
        if(ptr[i]>*maior){
            maior=&ptr[i];
        }
    }
    return maior;
}


void ExibirArray(int *ptr){
    for(int i=0; i<12; i++){
        cout<<"Endereço"<<&ptr[i]<<" | Elemento ["<<i+1<<"]: "<<ptr[i]<<endl;
    }
}
int main(){
    srand(time(0));
    int *ptr=(int*)malloc(12*sizeof(int));
    cout<<"Endereço do maior elemento: "<<PreencherArray(ptr)<<endl;
    ExibirArray(ptr);
}
