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
		cout << "Digite o valor para a posição " << i + 1 << ": " << endl;
		cin >> vetor[i];
	}
	
	cout << "Digite o valor para ser buscado no array:" << endl;
	cin >> num;
	
	for (i = 0; i < tamanho; i++)
	{
		if (num == vetor[i])
		{
			cout << "O número " << num << " está na posição " << i + 1 << endl;
		}
	}
	
}
