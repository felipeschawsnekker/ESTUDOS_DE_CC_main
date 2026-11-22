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
    cout<<"Digite o nome: "<<endl;
    char nome[100];
    cin>>nome;
    const char *frase=nome;
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
    int n;
    cout<<"Digite a quantidade de nomes que deseja cadastrar: "<<endl;
    cin>>n;
    
    for(int i=0; i<n;i++){
        gravarArquivo();
    }
    lerArquivo();
}
