#include <iostream>
#include <locale>
using namespace std;

//M�todo principal
void main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	cout << "Digite um n�mero: ";
	cin >> numero;

	if (numero % 2 == 0) 
		cout << numero << " � par.";
	else
		cout << numero << " � impar.";
	//faz com que divida o n�mero por 2 e se a sobra for 0, ele � par, sen�o � impar
	
	system("pause>null");
}