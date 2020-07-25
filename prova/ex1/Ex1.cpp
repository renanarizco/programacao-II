/*
Um estudante do Curso de Sistemas de Informação da UNIFAFIBE, resolveu fazer uma
modificação da definição de Fatorial, onde a formula ficaria do seguinte jeito:
n!= n * (n -1)!+ n, 0!= 2
*/

#include <iostream>
#include <locale>

using namespace std;

int fatorial(int);

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int numero, fat;

	cout << "Informe um valor: " << endl;
	cin >> numero;

	fat = fatorial(numero); //fat armazena o retorno da função fatorial
	cout << "O fatorial de " << numero << " é: " << fat << endl;

	system("pause>null");
}

int fatorial(int n) {
	int resultado;

	if ((n == 0)) {
		return 2;
	}

	//fatorial
	resultado = n * fatorial(n - 1) + n; //se n = 1, ele pega o resultado de (0! = 2) e faz (1 * 2 + 1)

	return resultado; //retorna resultado para ser usado no main
}


