#include <iostream>
using namespace std;

const int N = 3;
int vetor[N] = {12, 17, 15};

void geraMaior(int n, int *vet) {
	int maior = vet[0];
	for(int i = 0; i < n; i++) {
		if(maior < vet[i]) {
			maior = vet[i];
		}
	}
	cout << "Maior n*: " << maior << endl;
}

int main() {
	geraMaior(N, vetor);
	cout << "vitorgay" << endl;
	return 0;
}


//
