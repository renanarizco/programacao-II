#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int l, c, calc = 0;
	int matriz1[2][2];

	//primeira
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c < 2; c++)
		{
			cout << "Digite o valor para a posição " << l + 1 << ":" << c + 1 << endl;
			cin >> matriz1[l][c];
		}
	}
	
	cout << endl;
	
	//imprime primeira
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c < 2; c++)
		{
			cout << matriz1[l][c] << " ";
		}
		cout << endl;
	}
				 	
	cout << endl;
	
	cout << "Matriz resultante: " << endl;
	
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c < 2; c++)
		{
			cout << matriz1[c][l] << " ";
		}
		cout << endl;
	}

}
