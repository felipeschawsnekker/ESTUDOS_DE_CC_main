//Crie uma struct Aluno com nome, matrícula e nota. Peça os dados e exiba.
#include <iostream>
using namespace std;
#include <string>
struct Aluno{
    string nome;
    int matricula;
    double nota;
};

int main(){
    Aluno participante;
    
    cout<<"Digite o seu nome: "; getline(cin,participante.nome);
    cout<<"Digite o ID de sua matrícula: "; cin>>participante.matricula;
    cout<<"Digite sua nota: "; cin>>participante.nota;
    
    cout<<"\t ==========EXIBIÇÃO========== \t"<<endl;
    cout<<"NOME: "<<participante.nome<<endl;
    cout<<"MATRICULA: "<<participante.matricula<<endl;
    cout<<"NOTA: "<<participante.nota;
    return 0;
}
