//Ordenar em ordem decrescente os nomes

#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

#define tam 3
typedef struct Cadastro{
    int codigo;
    char nome[40];
    float nota;
}Cad[tam];

void Ordenar(Cad pessoa){
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam-i-1; j++){
            if (strcmp(pessoa[j].nome,pessoa[j+1].nome)<0){
                Cadastro aux;
                aux=pessoa[j];
                pessoa[j]=pessoa[j + 1];
                pessoa[j+1]=aux;
            }
        }
    }
}

int main(){
    Cad Pessoa;
    for(int i=0; i<tam; i++){
        
        cout<<"Pessoa número "<<i+1<<" - CÓDIGO: ";cin>>Pessoa[i].codigo;
        cout<<"Pessoa número "<<i+1<<" - NOME: "; cin>>(Pessoa[i].nome);
        cout<<"Pessoa número "<<i+1<<" - NOTA: "; cin>>Pessoa[i].nota;
    }
    
    Ordenar(Pessoa);
    cout<<"Nomes ordenados"<<endl;
    for(int i=0; i<tam; i++){
        cout<<Pessoa[i].nome<<" ";
    }
}

