#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i, tamanho, posicao, num;
	
	cout << "Digite o tamanho do array: " << endl;
	cin >> tamanho;
	
	int vetor[tamanho];
	
	for (i = 0; i < tamanho; i++)
	{
		cout << "Digite o valor para a posi��o " << i + 1 << ": " << endl;
		cin >> vetor[i];
	}
	
	cout << "Digite o valor para ser buscado no array:" << endl;
	cin >> num;
	
	for (i = 0; i < tamanho; i++)
	{
		if (num == vetor[i])
		{
			cout << "O n�mero " << num << " est� na posi��o " << i + 1 << endl;
		}
	}
	
}
