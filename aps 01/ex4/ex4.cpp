#include <iostream>
#include <locale>
using namespace std;

//Método principal
void main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero;

	cout << "Digite um número: ";
	cin >> numero;

	if (numero % 2 == 0) 
		cout << numero << " é par.";
	else
		cout << numero << " é impar.";
	//faz com que divida o número por 2 e se a sobra for 0, ele é par, senão é impar
	
	system("pause>null");
}