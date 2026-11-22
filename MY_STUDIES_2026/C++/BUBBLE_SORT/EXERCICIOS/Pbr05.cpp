#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

#define tam 3
typedef struct Cadastro{
    int conta;
    char nome[30];
    float saldo;
}Cad[tam];
int value;
bool cadastrado = false;

void Menu(){
    cout<<"┌──────────────────────────────────────────┐"<<endl;
    cout<<"│               MENU PRINCIPAL             │"<<endl;
    cout<<"├──────────────────────────────────────────┤"<<endl;
    cout<<"│  [1] Cadastrar Informações               │"<<endl;
    cout<<"│  [2] Ordenar Nomes (Ordem Ascendente)    │"<<endl;
    cout<<"│  [3] Gravar Informações no Arquivo       │"<<endl;
    cout<<"│  [4] Ler Informações do Arquivo          │"<<endl;
    cout<<"│  [5] Exibir Informações da Estrutura     │"<<endl;
    cout<<"│  [6] Sair                                │"<<endl;
    cout<<"└──────────────────────────────────────────┘"<<endl;
    cout<<" Opção desejada: ";
    cin>>value;
}

Cad pessoa;

void CadastrarIndividuos(){
    cout<<"\n=== CADASTRAR INDIVÍDUOS ==="<<endl;
    for(int i=0; i<tam; i++){
        cout<<"\n[ INDIVÍDUO N° "<<i+1<<" ]"<<endl;
        cout<<" Conta: "; cin>>pessoa[i].conta;
        cin.ignore();
        cout<<" Nome: "; cin>>(pessoa[i].nome);
        cout<<" Saldo: "; cin>>pessoa[i].saldo;
    }
    cadastrado = true;
    cout<<"\n>> Cadastro realizado com sucesso! <<\n"<<endl;
}

void OrdenarNomes(){
    if(!cadastrado){
        cout<<"\n>> ERRO: Nenhum dado cadastrado! <<\n"<<endl;
        return;
    }
    struct Cadastro aux;
    for(int i=0; i<tam-1; i++){
        for(int j=i+1; j<tam; j++){
            if(strcmp(pessoa[i].nome, pessoa[j].nome) > 0){
                aux = pessoa[i];
                pessoa[i] = pessoa[j];
                pessoa[j] = aux;
            }
        }
    }
    cout<<"\n>> Nomes ordenados com sucesso! <<\n"<<endl;
}

void GravarArquivo(){
    if(!cadastrado){
        cout<<"\n>> ERRO: Nenhum dado cadastrado para gravar! <<\n"<<endl;
        return;
    }
    ofstream arq("dados.txt");
    for(int i=0; i<tam; i++){
        arq<<pessoa[i].conta<<endl;
        arq<<pessoa[i].nome<<endl;
        arq<<pessoa[i].saldo<<endl;
    }
    arq.close();
    cout<<"\n>> Dados gravados no arquivo com sucesso! <<\n"<<endl;
}

void LerArquivo(){
    ifstream arq("dados.txt");
    if(!arq.is_open()){
        cout<<"\n>> ERRO: Arquivo inexistente ou erro ao abrir! <<\n"<<endl;
        return;
    }
    Cadastro temp;
    cout<<"\n=== DADOS LIDOS DO ARQUIVO ==="<<endl;
    for(int i=0; i<tam; i++){
        arq>>temp.conta;
        arq.ignore();
        arq.getline(temp.nome, 30);
        arq>>temp.saldo;
        cout<<"----------------────────────"<<endl;
        cout<<" INDIVÍDUO N° "<<i+1<<endl;
        cout<<" Conta: "<<temp.conta<<endl;
        cout<<" Nome:  "<<temp.nome<<endl;
        cout<<" Saldo: "<<temp.saldo<<endl;
    }
    cout<<"----------------────────────\n"<<endl;
    arq.close();
}

void LerEstrutura(){
    if(!cadastrado){
        cout<<"\n>> ERRO: Nenhum dado cadastrado! <<\n"<<endl;
        return;
    }
    cout<<"\n=== DADOS DA ESTRUTURA (MEMÓRIA) ==="<<endl;
    for(int i=0; i<tam; i++){
        cout<<"----------------────────────"<<endl;
        cout<<" INDIVÍDUO N° "<<i+1<<endl;
        cout<<" Conta: "<<pessoa[i].conta<<endl;
        cout<<" Nome:  "<<pessoa[i].nome<<endl;
        cout<<" Saldo: "<<pessoa[i].saldo<<endl;
    }
    cout<<"----------------────────────\n"<<endl;
}

int main(){
    Menu();
    while(value != 6){
        switch(value){
            case 1:
                CadastrarIndividuos();
                Menu();
                break;
            case 2:
                OrdenarNomes();
                Menu();
                break;
            case 3:
                GravarArquivo();
                Menu();
                break;
            case 4:
                LerArquivo();
                Menu();
                break;
            case 5:
                LerEstrutura();
                Menu();
                break;
            default:
                cout<<"\n>> Opção inválida! <<\n"<<endl;
                Menu();
                break;
        }
    }
}
