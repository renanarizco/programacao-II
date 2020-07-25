#include <iostream>
#include <locale>
#include <string>

using namespace std;

class Conta
{
	string titular;
	float saldo;
public:
	void cadastro();
	void deposito();
	void saque();
	void printar();
};

void Conta::cadastro()
{
	cout << "Titular: " << endl;
	getline(cin, titular);

	cout << "Saldo atual: " << endl;
	cin >> saldo;

	system("cls");

	cout << "Bom dia " << titular << endl;
}

void Conta::printar()
{
	cout << "Saldo atual: R$" << saldo << endl;
}

void Conta::deposito()
{
	float quantidade;
	cout << "Digite a quantidade para depositar: " << endl;
	cin >> quantidade;
	saldo += quantidade;
}

void Conta::saque()
{
	float quantidade;
	cout << "Digite a quantidade para sacar: " << endl;
	cin >> quantidade;
	saldo -= quantidade;
}

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	Conta a;

	//Cadastro
	a.cadastro();
	a.printar();


	//Repetição do menu
	do
	{
		cout << "Você quer: " << endl;
		cout << "1- Depositar" << endl;
		cout << "2- Sacar" << endl;
		cout << "3- Sair" << endl;
		cin >> escolha;
		system("cls");

		if (escolha == 1)
		{
			a.printar();
			a.deposito();
			system("cls");
			a.printar();
		}

		else if (escolha == 2)
		{
			a.printar();
			a.saque();
			system("cls");
			a.printar();
		}

		else if (escolha > 3 || escolha < 1)
		{
			cout << "ERRO! Somente 1, 2 ou 3" << endl;
			system("pause");
			system("cls");
			a.printar();
		}
	} while (escolha != 3);

	system("pause");
}