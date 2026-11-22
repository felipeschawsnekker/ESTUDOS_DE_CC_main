/* Considere uma pilha que armazene caracteres. Escreva uma função que verifique se  uma palavra e um palíndromo.   
*/

#include <stack>
#include <iostream>
using namespace std;

void add(stack<char> &s1, string x){
    for(char &c: x){
        s1.push(c);
    }
}

bool compare(stack<char> s1){
    stack<char> temp;
    int x = s1.size();

    // inverter s1 dentro de temp
    for(int i = 0; i < x; i++){
        temp.push(s1.top()); // faltavam os ()
        s1.pop();
    }
    stack<char> temp2 = temp; 
    int contador = 0;6
    
    for(int i = 0; i < x; i++){
        if(temp2.top() == temp.top()){
            contador++;
        }
        temp2.pop();
        temp.pop();
    }

    return contador == x;
}


int main(){
    stack<char>s1;
    string palavra;
    cout<<"Digite uma palavra: ";
    cin>>palavra;
    add(s1,palavra);
    if(compare(s1)){
        cout<<"A palavra "<<palavra<<" é um palíndromo"<<endl;
    }
    else{
        cout<<"A palavra "<<palavra<<" não é um palíndromo"<<endl;
    }
}
