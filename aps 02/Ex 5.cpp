

#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, tamanho, soma = 0;
	
	cout << "Digite o tamanho do array: " << endl;
	cin >> tamanho;
	
	int vetor[tamanho];
	
	for (i = 0; i < tamanho; i++)
	{
		cout << "Digite o valor para a posição " << i + 1 << ": " << endl;
		cin >> vetor[i];
		soma += vetor[i];
	}
	
	cout << "Resultado: " << soma;
	
	
}
