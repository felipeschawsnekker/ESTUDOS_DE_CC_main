//Fazer um vetor para ordenar um vetor com 6 notas (float). As notas serão informadas
//Via cin e classificar em ordem crescente

#include <iostream>
#include <iomanip>
using namespace std;

void ordenarVetor(float *vetorNotas, int tamanhoDoVetor){
    for(int i=0; i<tamanhoDoVetor; i++){
        for(int j=0; j<tamanhoDoVetor-1-i; j++){
            if(vetorNotas[j]>vetorNotas[j+1]){
            int temp=vetorNotas[j];
            vetorNotas[j]=vetorNotas[j+1];
            vetorNotas[j+1]=temp;
            }
        }
    }
    cout<<"\n ===Vetor ordenado=== \n";
    for(int i=0; i<tamanhoDoVetor; i++){
        
        cout<<vetorNotas[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    float vetorNotas[6];
    cout<<"Digite as notas abaixo:"<<endl;
    for(int i=0; i<6; i++){
        cin>>vetorNotas[i];
        cout<<endl;
    }
    
    ordenarVetor(vetorNotas,6);
}
