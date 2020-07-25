/*
Printar a palavra mais longa de uma frase
*/

#include <iostream>
#include <string>
#include <locale>

using namespace std;

void main() 
{
	setlocale(LC_ALL, "Portuguese");

	string frase, palavra, maior_palavra;
	int i;

	cout << "Digite uma string" << endl;
	getline(cin, frase);

	for (i = 0; i < frase.length(); i++) 
	{
		if (frase[i] != ' ')
			palavra += frase[i];
		else
			palavra = "";
		if (palavra.length() > maior_palavra.length())
			maior_palavra = palavra;
	}

	cout << "A maior palavra da string é: " << maior_palavra;

	system("pause>null");
}