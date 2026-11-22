#include <string>
#include <iostream>
#include <cctype>
using namespace std;

void howardviado(string howard){
    int x=howard.length();
    
    cout<<"O comprimento do nome é: "<<x<<endl;
}

void vitorviado(string vitor){
    int cont=0;
    for (char &c: vitor){
        c=tolower(c);
    }
    
    for(char &c: vitor){
        if(c=='a') cont++;
        if(c=='e') cont++;
        if(c=='i') cont++;
        if(c=='o') cont++;
        if(c=='u') cont++;
    }
    cout<<"O número de vogais é: "<<cont<<endl;
}
int main(){
    cout<<"Digite o nome: "<<endl;
    string a;
    getline(cin,a);
    howardviado(a);
    vitorviado(a);
}
