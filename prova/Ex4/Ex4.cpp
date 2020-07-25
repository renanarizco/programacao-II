#include <iostream>
#include <locale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	const int tamanho = 5;
	int a, b;
	int matriz[tamanho][tamanho];

	for (a = 0; a < tamanho; a++){
		for (b = 0; b < tamanho; b++){
			if (a > b)
				matriz[a][b] = 0;
			else
				matriz[a][b] = 1;
		}
	}

	for (a = 0; a < tamanho; a++){
		for (b = 0; b < tamanho; b++){
			cout << matriz[a][b] << " ";
		}
		cout << endl;
	}

	system("pause>null");
}