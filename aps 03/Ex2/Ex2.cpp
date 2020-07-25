/*
Escrever um programa que gere uma nova palavra mas as 2 primeira e 2 ultimos caracteres.
Sample String : 'w3resource'
Expected Result : 'w3ce'
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	string frase;

	cout << "Entre com a string" << endl;
	getline(cin, frase);

	if (frase.length() < 2)
		cout << "String vazia";

	else if (frase.length() == 1)
		cout << frase.substr(0, 1);

	else
	cout << frase.substr(0, 2) << frase.substr(frase.length() - 2, frase.length());
	
	system("pause>null");
}