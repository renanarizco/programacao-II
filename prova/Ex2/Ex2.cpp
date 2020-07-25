/*
Escrever um programa que separe um array de inteiros, botando os n�meros pares no
come�o e os n�meros impares no final. Por exemplo:
[6,5,1,2,4,7] => [6,2,4,5,1,7]
[8,9,6,5,4,3] => [8,6,4,9,5,3]
*/

#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i = 0;
	int vetor[6];

	//l� as posi��es e checa se o numero � par, se for ele insere no vetor pares, sen�o no impares
	for (i = 0; i < 6; i++){
		cout << "Posi��o " << i + 1 << ": ";
		cin >> vetor[i];
	}
	//imprime os valores seguindo a ordem solicitada, os pares na frente e os impares atr�s.
	for (i = 0; i < 6; i++){
		if ((vetor[i]%2) == 0)
		cout << vetor[i] << " ";
	}

	for (i = 0; i < 6; i++){
		if ((vetor[i]%2) == 1)
		cout << vetor[i] << " ";
	}

	system("pause>null");
}
