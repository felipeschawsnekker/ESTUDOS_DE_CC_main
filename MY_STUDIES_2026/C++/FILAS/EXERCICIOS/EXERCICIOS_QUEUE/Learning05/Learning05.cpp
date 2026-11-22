#include <queue>
#include <iostream>
using namespace std;

void Inverter(queue<string> *p, queue<string> *s){
    int n = p->size();

    for(int i = 0; i < n; i++){
        string atual = p->front();
        p->pop();

        string invertida = "";
        int tam = atual.size();

        for(int j = tam - 1; j >= 0; j--){
            invertida += atual[j];
        }
        p->push(atual);
        s->push(invertida);
    }
}

void Exibir(queue<string> p){
    int n = p.size();

    for(int i = 0; i < n; i++){
        cout << p.front() << " ";
        p.pop();
    }
    cout << endl;
}

int main(){
    queue<string> normal;
    queue<string> invertida;

    // 4 nomes
    normal.push("Felipe");
    normal.push("Maria");
    normal.push("Joao");
    normal.push("Ana");

    Inverter(&normal, &invertida);

    cout << "Original: ";
    Exibir(normal);

    cout << "Invertido: ";
    Exibir(invertida);

    return 0;
}
