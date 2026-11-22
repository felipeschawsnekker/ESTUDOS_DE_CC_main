/*01) Rev01- Fazer um programa para criar um arquivo “Arqu01.txt”, 
gravar várias frases, informadas pelo usuário, no arquivo, ler o 
arquivo e mostrar na tela o resultado. Usar putc e getc .
*/

#include <iostream>
using namespace std;
#include <cstdio>

    
    void CriarArquivo(){
    FILE* arquivo=fopen("Arqu01.txt","w");
    if(arquivo==NULL){
        cout<<"Arquivo não encontrado"<<endl;
        
    }
    else{
        cout<<"Arquivo criado com sucesso"<<endl;
    }
    fclose(arquivo);
    }
    
    void AdicionarArquivo(){
    FILE *arquivo=fopen("Arqu01.txt","a");
    cout<<"Digite uma mensagem para adicionar ao arquivo: "<<endl;
    int c;
    c=getc(stdin);
    while(c!='\n'){
        putc(c,arquivo);
        c=getc(stdin);
    }
    fclose(arquivo);
    }
    
    void LerArquivo(){
        FILE *arquivo=fopen("Arqu01.txt","r");
        int conteudo;
        conteudo=getc(arquivo);
        while (conteudo!=EOF){
            putc(conteudo,stdout);
            conteudo=getc(arquivo);
        }
    }
    
    int main(){
        
        CriarArquivo();
        AdicionarArquivo();
        
        cout<<" ============== Conteúdo do Arquivo ============== "<<endl;
        LerArquivo();
    }
