//Transfira os elementos de uma pilha S1 para uma pilha S2
#include <iostream>
#include <stack>
using namespace std;


int main(){
    stack<int> s1,s2;
    int V[] = {10, 50, 40, 30, 21, -90, 50, 65, 12, 55};
    int n= sizeof(V)/sizeof(V[0]);
    
    for(int i=0; i<n; i++){
        s1.push(V[i]);
    }
    
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
        
    }
    
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
}
