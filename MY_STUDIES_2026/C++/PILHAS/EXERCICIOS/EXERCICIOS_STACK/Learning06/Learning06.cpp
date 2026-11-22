/*Considere uma pilha que armazene caracteres. 
Escreva uma função que verifique se  uma palavra e um palíndromo.   
*/

#include <stack>
#include <iostream>
#include <string>
using namespace std;


void PushCaracteres(stack <char> &pilha, string frase){
    if(frase!=""){
    for(char c : frase){
        pilha.push(c);
    }
    }
    else{
        cout<<"Frase vazia!"<<endl;
        return;
    }
}


void FuncaoPalindromo(stack <char> pilha){
    stack <char> pali=pilha;
    stack <char> temp;
    const int x=pilha.size();
    
    //INVERTER 
    for(int i=0; i<x; i++){
        temp.push(pali.top());
        pali.pop();
    }
    
    //VERIFICAR IGUALDADE
    int verificador=0;
    for(int i=0; i<x; i++){
        if(temp.top()==pilha.top()){
            verificador++;
        
        }
        temp.pop();
        pilha.pop();
    }
    
    //VERIFICADOR EM AÇÃO
    if(verificador==x){
        cout<<"É um palíndromo!"<<endl;
        
    }
    else{
        cout<<"Não é um palindromo"<<endl;
    }
    
    
}

    

int main(){
    stack <char> banana;
    string frase="radar";
    PushCaracteres(banana,frase);
    FuncaoPalindromo(banana);
    
}
