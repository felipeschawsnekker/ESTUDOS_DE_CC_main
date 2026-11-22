/*Classe Aluno

Crie uma classe Aluno com:

atributos: nome, nota

método: mostrarDados()

No main, peça ao usuário o nome e a nota, salve no objeto e mostre.
*/

#include <iostream>
#include <string>
using namespace std;
class Aluno{
    public:
    string nome;
    double nota;
    void mostrarDados(){
        cout<<"\n==============Seus dados são==============\n";
        cout<<"NOTA:            "<<nota<<endl;
        cout<<"NOME:            "<<nome<<endl;
        
    }
};

int main(){
    Aluno estudante;
    cout<<"Digite seu nome: "<<endl;
    getline(cin,estudante.nome);
    
    cout<<"Digite sua nota: "<<endl;
    double value;
    cin>>estudante.nota;
    estudante.mostrarDados();
}
