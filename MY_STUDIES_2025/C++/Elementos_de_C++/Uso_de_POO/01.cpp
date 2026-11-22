/*Crie uma classe Pessoa com:

atributo: nome

método: apresentar() que imprime “Olá, meu nome é X”

No main, crie um objeto e chame o método.
*/
/*Crie uma classe Pessoa com:

atributo: nome

método: apresentar() que imprime “Olá, meu nome é X”

No main, crie um objeto e chame o método.
*/

#include <iostream>
using namespace std;
class Pessoa{
    public:
    string nome;
    void apresentar(){
        cout<<"Olá meu nome é: "<<nome;
    }
};

int main(){
    Pessoa a;
    a.nome="Pablo";
    a.apresentar();
}
