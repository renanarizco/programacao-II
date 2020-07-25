#include <iostream>
#include <locale>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	string frase;
	int i = 0, tamanho;

	cout << "Digite uma string" << endl;
	getline(cin, frase);

	tamanho = frase.length();

	while (i < tamanho)
	{
		if ((i % 2) == 0)
			frase[i] = toupper(frase[i]);
		else
			frase[i] = tolower(frase[i]);
		i++;
	}

	cout << frase;

	system("pause>null");
}