#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    
    int c=getc(stdin);
    
    while(c!='\n'){
        putc(c,stdout);
        c=getc(stdin);
    }

return 0;
}
