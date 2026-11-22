#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	int maior,menor;
	cout<<"Digite um número N (Inteiro): "; cin>>x;
	cout<<"Digite um segundo número N(Inteiro): "; cin>>y;
	
	if(x>y){
		maior=x;
		menor=y;
	}
	else{
		maior=y;
		menor=x;
	}

	for(int i=menor; i<=maior; i++){
		int cont=0;
		for(int j=1; j<=i; j++){
				if (i % j == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            cout << i << " ";
        }
    }

		
	}
	
	
