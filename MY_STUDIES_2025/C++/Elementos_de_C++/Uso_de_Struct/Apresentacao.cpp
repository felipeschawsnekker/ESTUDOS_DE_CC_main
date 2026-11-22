Uma struct (estrutura) serve pra agrupar variáveis diferentes em um só tipo de dado.
Por exemplo, se você quiser guardar dados de uma pessoa:

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    Pessoa p1;

    cout << "Digite o nome: ";
    cin >> p1.nome;
    cout << "Digite a idade: ";
    cin >> p1.idade;
    cout << "Digite a altura: ";
    cin >> p1.altura;

    cout << "\n--- Dados ---\n";
    cout << "Nome: " << p1.nome << endl;
    cout << "Idade: " << p1.idade << endl;
    cout << "Altura: " << p1.altura << endl;

    return 0;
}
