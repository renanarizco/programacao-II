#include <iostream>
#include <locale>
using namespace std;

//Método principal
void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i;
	bool primo = true;

	cout << "Digite um número: ";
	cin >> numero;

	for (i = 2; i <= numero / 2; ++i)
	{
		if (numero % i == 0)
		{
			primo = false;
			break;
		}
	}
	if (primo)
		cout << numero << " é primo!" << endl;
	else
		cout << numero << " não é primo!" << endl;

	system("pause>null");
}