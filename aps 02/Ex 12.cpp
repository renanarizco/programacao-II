#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int l, c, calc = 0;
	int matriz1[2][2];
	int matriz2[2][2];
	int resultado[2][2];

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
	
	//segunda
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c < 2; c++)
		{
			cout << "Digite o valor para a posição " << l + 1 << ":" << c + 1 << endl;
			cin >> matriz2[l][c];
		}
	}
	
	cout << endl;
	
	//imprime segunda
	for (l = 0; l < 2; ++l)
	{
		for (c = 0; c < 2; ++c)
		{
			cout << matriz2[l][c] << " ";
		}
		cout << endl;
	}
	
	//calculo
	for(l = 0; l < 2; l++) 
	{
		for(c = 0; c < 2; c++) 
		{
			resultado[l][c] = 0;
			for(calc = 0; calc < 2; calc++) 
			{
				resultado[l][c] = resultado[l][c] + (matriz1[l][calc] * matriz2[calc][c]);
			}
					
		}
				 	
	}
	cout << endl;
	cout << "Matriz resultante: " << endl;
	
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c < 2; c++)
		{
			cout << resultado[l][c] << " ";
		}
		cout << endl;
	}

}
