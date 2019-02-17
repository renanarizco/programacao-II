#include <iostream>
#include <locale>
using namespace std;

//Método principal
void main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero1, numero2, numero3;

	cout << "Digite o primeiro numero: ";
	cin >> numero1;

	cout << "Digite o segundo numero: ";
	cin >> numero2;
	
	cout << "Digite o terceiro numero: ";
	cin >> numero3;
	cout << endl;

	if (numero1 > numero2 && numero1 > numero3)
		cout << "O maior dos numeros digitados é: " << numero1 << endl;

	else if (numero2 > numero1 && numero2 > numero3)
		cout << "O maior dos números digitados é: " << numero2 << endl;

	else
		cout << "O maior dos números digitados é: " << numero3 << endl;

	system("pause>null");
}