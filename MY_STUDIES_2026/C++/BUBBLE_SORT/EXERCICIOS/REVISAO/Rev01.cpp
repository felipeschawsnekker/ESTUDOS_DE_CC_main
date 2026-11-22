//REV 01
/* FAZER UM PROGRAMA PARA LER UM VETOR DE 5 NUMEROS
VIA CIN E FAZER UM MENU COM AS OPÇÕES
LER
CLASSIFICAR CRESCENTE
CLASSIFICAR DECRESCENTE
LISTANDO SEUS ELEMENTOS
*/

#include <iostream>

using namespace std;

void gravarVetor(float *vetor, int tamanhoDoVetor){
    float temp;
    for(int i=0; i<tamanhoDoVetor; i++){
        cout<<"Elemento n* "<<i+1<<": ";
        cin>>temp;
        vetor[i]=temp;
    }
}
void mostrarVetor(float *vetor, int tamanhoDoVetor){
    cout<<"VETOR: ";
    for(int i=0; i<tamanhoDoVetor; i++){
        cout<<vetor[i]<<" ";
    }
    cout<<endl;
}

void ordenarBubbleSortCrescente(float *vetor, int tamanhoDoVetor){
    for(int i=0; i<tamanhoDoVetor; i++){
        for(int j=0; j<tamanhoDoVetor-i-1; j++){
            if(vetor[j]>vetor[j+1]){
                float temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
            }
        }
    }
    mostrarVetor(vetor, tamanhoDoVetor);
}

void ordenarBubbleSortDecrescente(float *vetor, int tamanhoDoVetor){
    for(int i=0; i<tamanhoDoVetor; i++){
        for(int j=0; j<tamanhoDoVetor-1-i; j++){
            if(vetor[j]<vetor[j+1]){
                float temp=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=temp;
            }
        }
    }
    mostrarVetor(vetor, tamanhoDoVetor);
}

void MENU(){
    int tamanhoDoVetor=5;
    float vetor[tamanhoDoVetor];
    while(true){
        cout<<"\t =================================MENU================================= \t"<<endl;
        cout<<"1 - ADICIONAR ELEMENTOS NO VETOR \t"<<endl;
        cout<<"2 - LISTAR ELEMENTOS DE UM VETOR \t"<<endl;
        cout<<"3 - ORDENAR EM ORDEM CRESCENTE OS ELEMENTOS DE UM VETOR \t"<<endl;
        cout<<"4 - ORDENAR EM ORDEM DECRESCENTE OS ELEMENTOS DE UM VEOTR \t"<<endl;
        cout<<"5 - SAIR \t"<<endl;
        int temp;
        cin>>temp;
        switch(temp){
            case 1: 
                gravarVetor(vetor,tamanhoDoVetor);
                break;
            case 2:
                mostrarVetor(vetor,tamanhoDoVetor);
                break;
            case 3:
                ordenarBubbleSortCrescente(vetor,tamanhoDoVetor);
                break;
            case 4:
                ordenarBubbleSortDecrescente(vetor,tamanhoDoVetor);
                break;
            case 5:
                return;
        }
    }
            
}
int main(){
    MENU();
    
}

