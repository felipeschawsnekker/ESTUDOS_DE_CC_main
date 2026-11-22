#include <iostream>
using namespace std;
#include <cstdio>
int main(){
    const char nome[]="Felipe";
    
    for (int i =0; nome[i]!='\0'; i++){
        putc(nome[i],stdout);
    }
    return 0;
}
