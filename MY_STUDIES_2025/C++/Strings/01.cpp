//Prb01-Programa que lê 2 palavras e determine:Se as palavras são iguais;
//Caso as palavras sejam diferentes, qual delas tem maior comprimento
//(não esquecer a possibilidade de existirem palavras diferentes de mesmo tamanho);


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string a[2];
    
    cout<<"Digite duas palavras\n";
    
    for(int i=0; i<2;i++){
        cout<<"Palavra "<<i+1<<": ";
        cin>>a[i];
    }
    for(char &c : a[0]) c=tolower(c);
    
    
    for(char &c : a[1]) c=tolower(c);
    
    if(a[0]==a[1]) cout<<"\nSão iguais";
    
    else {
        
    cout<<"\nSão diferentes"<<endl;
    if(a[0].length()>a[1].length()) cout<<a[0]<<" é Maior que "<<a[1];
    else if (a[0].length()<a[1].length()) cout<<a[1]<<" é Maior que "<<a[0];
    else cout<<"São iguais";
}
}
