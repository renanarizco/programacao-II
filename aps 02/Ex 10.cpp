#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");


	int l, c;
	int ml, mc;
	
	cout << "Digite o valor de linhas: " << endl;
	cin >> ml; 
	cout << "Digite o valor de colunas: " << endl;
	cin >> mc; 	
	cout << endl;
	
	int matriz[ml][mc];


	for (l = 0; l < ml; l++)
	{
		for (c = 0; c < mc; c++)
		{
			cout << "Digite o valor para a posição " << l + 1 << ":" << c + 1 << endl;
			cin >> matriz[l][c];
		}
	}
	
	cout << endl;
	cout << "Matriz resultante: " << endl;
	for (l = 0; l < ml; l++)
	{
		for (c = 0; c < mc; c++)
		{
			cout << matriz[l][c] << " ";
		}
		cout << endl;
	}
}
