#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void geraArquivo(){
    FILE *arquivo=fopen("Arq04.txt","w");
        if(arquivo!=nullptr){
            cout<<"\nArquivo criado!";
        }
        else{
            cout<<"\nErro";
            return;
        }
    fclose(arquivo);
    }

void gravarArquivo(){
    FILE *arquivo=fopen("Arq04.txt","w");
    if(arquivo!=nullptr){
            cout<<"\nArquivo aberto!";
        }
        else{
            cout<<"\nErro";
            return;
        }
        
    const char *frase="\nfrase qualquer, apenas escrevendo!";
    fwrite(frase,sizeof(char),strlen(frase),arquivo);
    fclose(arquivo);
}

void lerArquivo(){
    FILE *arquivo=fopen("Arq04.txt","r");
    if(arquivo==NULL){
        cout<<"\nErro ao abrir o arquivo!"<<endl;
    }
    char buffer[100];
    size_t itensLidos = fread(buffer,sizeof(char),99,arquivo);
    buffer[itensLidos]='\0';
    cout<<"\nConteúdo lido: "<<buffer;
    fclose(arquivo);
}


int main(){
    geraArquivo();
    gravarArquivo();
    lerArquivo();
}
