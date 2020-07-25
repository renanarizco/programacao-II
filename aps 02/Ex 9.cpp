#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i, tamanho;
	int * vetor;

	cout << "Digite o tamanho do array: " << endl;
	cin >> tamanho;
	cout << endl;

	vetor = (int*)malloc(tamanho * sizeof(int));
	
	for (i = 0; i < tamanho; i++)
	{
		cout << "Digite o valor para a posição " << i + 1 << ": " << endl;
		cin >> vetor[i];
	}
	cout << endl;
	
	for(i= tamanho -1; i >= 0; i--)
	{
  		cout << vetor[i] << endl;
	}
	free(vetor);
}
