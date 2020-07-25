/*
Um palíndromo é uma palavra, frase ou qualquer outra sequência de unidades que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.

Entrada:
A primeira linha contém um números que indica a quantidade de possíveis palíndromos que ingressada. Seguido ingresara os textos.

Saída:
O programa escrevera S se for palíndromo e N se não for palíndromo

Exemplo de entrada:
3
reviver
lus azul
apos a sopa

Exemplo de saída:
S
N
S

*/

#include <iostream>
#include <string>
#include <locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int vezes, i;
	string frase = "";
	bool palindromo = true;

	cout << "Digite a quantidade de vezes para rodar o programa: ";
	cin >> vezes;

	system("cls");


	for (i = 0; i < vezes; i++)
	{
		cout << "Digite a palavra: ";
		cin >> frase;

		int tamanho = frase.length();
		for (int i = tamanho / 2; i > 0; i--)
		{
			if (frase[i] != frase[tamanho - i - 1])
			{
				palindromo = false;
				break;
			}
		}
		if (palindromo)
			cout << frase << " é palindromo" << endl;
		else
			cout << frase << " não é palindromo" << endl;

		palindromo = true;

		system("pause>null");
		system("cls");
	}
}