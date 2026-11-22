/*Fazer um programa para criar um arquivo “Arqu02.txt”, gravar várias frases no arquivo, 
informadas pelo usuário, ler o arquivo e mostrar na tela o resultado. Utilizar  fgets() e fputs().
*/

#include <iostream>
#include <cstdio>
using namespace std;

void CriarArquivo(){
    FILE *arquivo=fopen("Arqu02.txt","w");
    fclose(arquivo);
}

void GravarArquivo(){
    FILE *arquivo=fopen("Arqu02.txt","a");
    char frase[100];
    cin.getline(frase,100);
    fputs(frase,arquivo);
    fputs("\n",arquivo);
    fclose(arquivo);
}

void LerArquivo(){
    FILE *arquivo=fopen("Arqu02.txt","r");
    char frase[100];
    cout<<"==========CONTEÚDO DO ARQUIVO=========="<<endl;
    while(!feof(arquivo)){
        if(fgets(frase,100,arquivo)!=NULL){
        cout<<frase;
    }
    
    }
    fclose(arquivo);
}


int main(){
    CriarArquivo();
    cout<<"Quantas frases deseja gravar?"<<endl;
    int i;
    cin>>i;
    cin.ignore();
    cout<<"Digite a(s) frase(s)"<<endl;
    for(int j=0; j<i; j++){
    GravarArquivo();
    }
    LerArquivo();
}
