/*
Um pal�ndromo � uma palavra, frase ou qualquer outra sequ�ncia de unidades que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.

Entrada:
A primeira linha cont�m um n�meros que indica a quantidade de poss�veis pal�ndromos que ingressada. Seguido ingresara os textos.

Sa�da:
O programa escrevera S se for pal�ndromo e N se n�o for pal�ndromo

Exemplo de entrada:
3
reviver
lus azul
apos a sopa

Exemplo de sa�da:
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
			cout << frase << " � palindromo" << endl;
		else
			cout << frase << " n�o � palindromo" << endl;

		palindromo = true;

		system("pause>null");
		system("cls");
	}
}