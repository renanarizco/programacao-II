#include <iostream>
using namespace std;

//Método principal
void main()
{
	int velocidade, tempo;

	cout << "Digite a velocidade (V): ";
	cin >> velocidade;

	cout << "Digite o tempo (T): ";
	cin >> tempo;

	cout << "Resultado: " << (2 * velocidade * tempo);

	system("pause>null");
}