/*Dado uma pilha que armazene números, 
escreva uma função que forneça o maior, o 
menor e a media aritmética dos elementos da pilha.
*/

#include <stack>
#include <iostream>
using namespace std;


void MaiorMenor(stack <double> pilha){
    if(pilha.size()==0){
        cout<<"Pilha Vazia"<<endl;
        return;
    }
    
    stack <double> temp = pilha;
    double maior=temp.top();
    double menor=temp.top();
    const int x = temp.size();
    
    //CALCULO MAIOR&MENOR
    for(int i=0; i<x; i++){
        
        double valor=temp.top();
        temp.pop();
        if(maior<valor){
            maior=valor;
        }
        if(menor>valor){
            menor=valor;
        }
    }
    cout<<"Maior Valor: "<<maior<<endl;
    cout<<"Menor Valor: "<<menor<<endl;

}

void MediaAritmetica(stack <double> pilha){
    if(pilha.size()==0){
        cout<<"Pilha vazia!"<<endl;
        return;
    }
    
    const int tamanho = pilha.size();
    stack <double> temp = pilha;
    double soma=0;
    for(int i=0; i<tamanho; i++){
        soma+=temp.top();
        temp.pop();
    }
    
    double value=soma/tamanho;
    cout<<"A soma é: "<<soma<<". Portanto, a Média Aritmética é: "<<value<<endl;

    
}

int main(){
    stack <double> pilha;
    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);
    pilha.push(5);
    MaiorMenor(pilha);
    MediaAritmetica(pilha);
}

