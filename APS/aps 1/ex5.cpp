#include <iostream>
#include <locale>
using namespace std;

//M�todo principal
void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i;
	bool primo = true;

	cout << "Digite um n�mero: ";
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
		cout << numero << " � primo!" << endl;
	else
		cout << numero << " n�o � primo!" << endl;

	system("pause>null");
}