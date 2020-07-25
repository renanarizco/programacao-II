#include <iostream>
#include <locale>
using namespace std;

//Método principal
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int entradas;
	
	cout << "Digite quantas vezes o programa irá repetir: ";
	cin >> entradas;
	cout << endl;

	for (int i = 0; i < entradas; ++i)
	{
		int primeiro, segundo;
		cout << "Digite o primeiro numero: ";
		cin >> primeiro;

		cout << "Digite o segundo numero: ";
		cin >> segundo;
		cout << endl;

		if (primeiro < segundo)
			cout << primeiro << " < " << segundo << endl << endl;

		else if (primeiro > segundo)
			cout << primeiro << " > " << segundo << endl << endl;

		else
			cout << primeiro << " = " << segundo << endl << endl;

	}
	system("pause>null");
}