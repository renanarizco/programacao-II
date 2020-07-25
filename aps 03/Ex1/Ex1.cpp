#include <iostream>
#include <string>
using namespace std;

void main()
{
	int i, contador = 0;
	string frase;

	cout << "Entre com a string:" << endl;

	getline(cin, frase);

	for (i = 0; i < frase.length(); i++)
	{
		if (frase[i] == ' ') 
			contador++;
	}

	cout << "A frase tem " << contador + 1 << " palavras." << endl;

	system("pause>null");
}