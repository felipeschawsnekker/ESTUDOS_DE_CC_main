/*
String dinâmica

Ler o tamanho da string do usuário e criar uma string dinamicamente.
Preencher com caracteres e imprimir.
Liberar a memória.*/

#include <iostream>
using namespace std;
#include <cstdlib>
int main(){
    int tamanho;
    cout << "Digite o tamanho da string: ";
    cin >> tamanho;
    
    char *str = (char*)malloc((tamanho + 1) * sizeof(char)); // +1 para o caractere nulo
    if(str == NULL){
        cout << "Erro ao alocar memória!" << endl;
        return 1;
    }

    cout << "Digite a string: ";
    cin >> str;

    cout << "A string digitada é: " << str << endl;

    free(str);
    return 0;
}
