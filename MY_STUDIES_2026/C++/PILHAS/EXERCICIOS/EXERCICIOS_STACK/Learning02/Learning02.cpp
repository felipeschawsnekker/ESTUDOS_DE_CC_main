/* Transfira os elementos de uma pilha S1 para uma pilha S2 na mesma ordem de seus elementos. 
*/

#include <stack>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void transferir(stack<int> &s1, stack<int>&s2){
    stack<int>temp;
    const int x=s1.size();
    for(int i=0; i<x; i++){
        temp.push(s1.top());
        s1.pop();
    }
    for(int i=0; i<x; i++){
        s2.push(temp.top());
        temp.pop();
    }
}

void show(stack<int>s1){
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}

void add(stack<int> &s1){
    const int x=10;
    for(int i=0; i<x;i++){
        int temp=(rand()%50)+1;
        s1.push(temp);
    }
}

int main(){
    stack<int>s1,s2;
    add(s1);
    cout<<"PILHA S1: ";
    show(stack<int>(s1));
    cout<<endl;
    transferir(s1,s2);
    cout<<"PILHA S1: ";
    show(stack<int>(s1));
    cout<<endl;
    cout<<"PILHA S2: ";
    show(s2);
    cout<<endl;
}
