/* Soma de elementos dinamicamente
Criar um array dinamicamente, ler valores do usuário e calcular a soma usando ponteiros.*/

#include <iostream>
#include <cstdlib>
using namespace std;
const int x=10;
void LerArray(int *ptr){
    for(int i=0; i<x; i++){
        cout<<"Elemento ["<<i+1<<"]: "; cin>>ptr[i];
    }
}

void Soma(int *ptr){
    int sum=0;
    for(int i=0; i<x; i++){
        sum+=ptr[i];
    }
    cout<<"Soma dos Arrays: "<<sum<<endl;
}

int main(){
    int* ptr=(int*)malloc(x*sizeof(int));
    if(ptr==NULL){
        cout<<"Erro de alocação"<<endl;
        return 0;
    }
    LerArray(ptr);
    Soma(ptr);
    free(ptr);
    return 0;
}
