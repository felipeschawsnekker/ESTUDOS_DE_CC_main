#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(time(NULL));
    
    while(true){
    int x = (rand()%9999)+1111;

    string texto=to_string(x);

    

    int a=(texto[0] - '0');
    int b=(texto[1] - '0');
    int c=(texto[2] - '0');
    int d=(texto[3] - '0');
    int num=a*1000+b*100+c*10+d;
    
    int e=(a*10+b)+(c*10+d);
    int f=pow(e,2);
    if(f==num){
        cout<<"O número "<< x<< " possui essa caracteristica"<<endl;
    }
    }
}
