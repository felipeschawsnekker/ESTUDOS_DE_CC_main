/* Faça um programa que receba o nome e a idade de uma pessoa e liste os dados da pessoa. Fazer uma função para ler e outra listar.
*/
/* Leia nome e idade de uma pessoa e liste os dados.
   Agora usando stack e função void LerPessoa(Pessoa &p).
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

/* ----------- FUNÇÃO PARA LER PESSOA (REFERÊNCIA) ----------- */
void LerPessoa(Pessoa &p){
    cout << "Digite o nome: ";
    cin >> p.nome;

    cout << "Digite a idade: ";
    cin >> p.idade;
}

/* ----------- LISTAR (CÓPIA DA PILHA PARA NÃO DESTRUIR) ----------- */
void listar(stack<Pessoa> s){
    if(s.empty()){
        cout << "Pilha vazia\n";
        return;
    }

    cout << "\n--- LISTA DE PESSOAS ---\n";
    while(!s.empty()){
        cout << "Nome: " << s.top().nome
             << " | Idade: " << s.top().idade << endl;
        s.pop();
    }
}

int main(){

    stack<Pessoa> pilha;
    int qtd;

    cout << "Quantas pessoas deseja cadastrar? ";
    cin >> qtd;

    for(int i = 0; i < qtd; i++){
        Pessoa temp;
        LerPessoa(temp); // ← agora funciona certinho
        pilha.push(temp);
    }

    listar(pilha);

    return 0;
}
