#include <iostream>
#include <string>
#include <locale>

using namespace std;

void main()
{
	int i = 0, valor_1 = 0, valor_2 = 0;
	string frase, p_frase, p_final;

	cout << "Digite uma string" << endl;
	getline(cin, frase);


	cout << "Digite a palavra para mudar da frase: " << frase << endl;
	cin >> p_frase;

	cout << "Digite a palavra final para mudar: " << endl;
	cin >> p_final;

	valor_1 = frase.find(p_frase);

	for (i = valor_1; i < frase.length(); i++)
	{
		if (frase.at(i) == ' ')
		{
			valor_2 = i;
			break; //sai do for
		}
	}

	if (valor_2 == 0)
		valor_2 = frase.length();

	cout << frase.substr(valor_1, valor_2) << " " << p_final << frase.substr(valor_2);

	system("pause>null");
}