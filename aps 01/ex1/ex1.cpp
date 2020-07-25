#include <iostream>
#include <locale>
using namespace std;

//Método principal
void main()
{
	setlocale(LC_ALL, "Portuguese");
	int velocidade, tempo;

	cout << "Digite a velocidade (V): ";//Entra com o v
	cin >> velocidade;

	cout << "Digite o tempo (T): ";//Entra com o T
	cin >> tempo;

	cout << "Resultado: " << (2 * velocidade * tempo);//Faz o calculo para se chegar ao resultado

	system("pause>null");//Deixa pausado para poder ver sem fechar
}