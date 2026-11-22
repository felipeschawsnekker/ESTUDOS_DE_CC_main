//Fazer um programa para criar um arquivo “Arqu01.txt”, gravar várias frases, 
//informadas pelo usuário, no arquivo, ler o arquivo e mostrar na tela o resultado. Usar putc e getc .

#include <iostream>
using namespace std;
#include <cstdio>

void CriarArquivo(){
    FILE *Arq=fopen("Arqui01.txt","w");
    fclose(Arq);
}

void GravarFrases(){
    FILE *Arq=fopen("Arqui01.txt","a");
    int c=getc(stdin);
    while (c!='\n'){
        putc(c,Arq);
        c=getc(stdin);
    }
    fclose(Arq);
}

void LerArquivo(){
    FILE *Arq=fopen("Arqui01.txt","r");
    int conteudo=getc(Arq);
    while(conteudo!=EOF){
        putc(conteudo,stdout);
        conteudo=getc(Arq);
    }
    fclose(Arq);
}

int main(){
 CriarArquivo(); 
 cout<<"DIGITE A FRASE PARA ADICIONAR AO ARQUIVO: "<<endl;
 GravarFrases();
 cout<<"CONTEUDO DO ARQUIVO"<<endl;
 LerArquivo();
}
