/*
Escrever um programa que troque todos os caráteres repetidos que contém uma
cadeia de texto com o caractere “#”. Por exemplo:
“Hola tudo bom” => “H#la tud# b#m”
“UNIFAFIBE” => “UN##A##BE”
*/

#include <iostream>
#include <locale>
#include <string>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int a, b;
	string frase = "renan michel";
	string resultado = frase;

	int tamanho = frase.length();

	for (a = 0; a < tamanho; a++){
		for (b = 0; b < tamanho; b++){
			if (a != b){
				if (frase.at(a) == frase.at(b) && frase.at(a) != ' ') {
					resultado[a] = '#';
					resultado[b] = '#';
				}
			}
		}
	}

	cout << resultado << endl;
	system("pause>null");
}
