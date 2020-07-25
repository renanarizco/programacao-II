#include <iostream>
#include <stdlib.h>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int i, tamanho, soma, maior = 0, menor = 999999;
	int maiormenor[2];
	int * vetor;

	cout << "Digite o tamanho do array: " << endl;
	cin >> tamanho;

	vetor = (int*)malloc(tamanho * sizeof(int));

	for (i = 0; i < tamanho; i++)
	{
		cout << "Digite o valor para a posição " << i + 1 << ": " << endl;
		cin >> vetor[i];
		if (vetor[i] > maior)
		{
			maiormenor[0] = vetor[i];
			maior = vetor[i];
		}

		if (vetor[i] < menor)
		{
			maiormenor[1] = vetor[i];
			menor = vetor[i];
		}
	}

	soma = maiormenor[0] + maiormenor[1];
	cout << "Resultado: " << maiormenor[0] << " + " << maiormenor[1] << " = " << soma;
	free(vetor);
}
