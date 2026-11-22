//Faça um programa para ler as notas dos alunos e imprimir a média. Utilizar a alocação dinâmica.
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    int a;
    float media;
    float soma;
    cout<<"Numero de notas por aluno: "; cin>>a;
    
    cout<<"Numero de alunos: "; cin>>n;
    float *notas;
    notas=(float*)malloc(n*sizeof(float));
    
    for(int i=0; i<n;i++){
        soma=0;
        cout<<"Aluno ["<<i+1<<"]"<<endl;
        for(int j=0; j<a; j++){
            
            cout<<" ";
            cin>>notas[j]; cout<<" ; ";
            soma+=notas[j];
            media=soma/a;
        }
        cout<<"Media: "<<media;
        cout<<endl;
        
    }
}
