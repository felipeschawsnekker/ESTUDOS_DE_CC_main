//Frase invertida usando stack

#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main(){
    
    stack<char>c;
    string frase;
    
    
    cout<<"Digite uma frase: "; getline(cin,frase);
    int n=frase.size();
    
    for(int i=0; i<n; i++){
        c.push(frase[i]);
    }
    
    cout<<"Frase invertida: ";
    
    while(!c.empty()){
        cout<<c.top();
        c.pop();
    }
    
}
