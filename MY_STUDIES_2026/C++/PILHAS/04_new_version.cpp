//Escrever uma frase normal
#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){
    
    stack<char>c;
    string frase;
    
    
    cout<<"Digite uma frase: "; getline(cin,frase);
    int n=frase.size();
    
    for(int i=n-1; i>=0; i--){
        c.push(frase[i]);
    }
    
    cout<<"Frase normal: ";
    
    while(!c.empty()){
        cout<<c.top();
        c.pop();
    }
    
}
