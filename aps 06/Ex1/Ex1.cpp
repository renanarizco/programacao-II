#include <iostream>
#include <locale>
#include <string>

using namespace std;

class Conta
{
private:
	string titular;
	float saldo, limite;
public:
	void deposito();
	void saque();
	void printar();


	//Constructor 1
	Conta(string xTitular, float xSaldo)
	{
		setTitular(xTitular);
		setSaldo(xSaldo);
	}

	//Constructor 2
	Conta(string xTitular, float xSaldo, float xLimite)
	{
		setTitular(xTitular);
		setSaldo(xSaldo);
		setLimite(xLimite);
	}


	//Titular
	void setTitular(string xTitular)
	{
		titular = xTitular;
	}
	string getTitular()
	{
		return titular;
	}

	//Saldo
	void setSaldo(float xSaldo)
	{
		saldo = xSaldo;
	}
	float getSaldo()
	{
		return saldo;
	}

	//Limite de saque
	void setLimite(int xLimite)
	{
		limite = xLimite;
	}
	float getLimite()
	{
		return limite;
	}
};

//Printa o saldo atual
void Conta::printar()
{
	cout << "Saldo atual: R$" << getSaldo() << endl;
	cout << "Limite de saque: R$" << getLimite() << endl;
}

//Adiciona na variável saldo a quantidade desejada
void Conta::deposito()
{
	float quantidade;

	cout << "Digite a quantidade para depositar: " << endl;
	cin >> quantidade;

	while (quantidade < 0)
	{
		system("cls");
		cout << "Digite um numero positivo!";
		system("pause>null");
		system("cls");
		cout << "Digite a quantidade para depositar: " << endl;
		cin >> quantidade;
		system("cls");
	}
	setSaldo(saldo + quantidade);
}

//Se o saldo for positivo e a quantidade indicada for menor que o limite, ele saca
void Conta::saque()
{
	float quantidade;

	if (getSaldo() > 0)
	{
		cout << "Digite a quantidade para sacar: " << endl;
		cin >> quantidade;

		if (quantidade <= getLimite())
		{
			setSaldo(saldo - quantidade);
		}
		else
		{
			cout << "Erro! Quantidade para sacar maior que limite." << endl;
			system("pause>null");
		}
	}
	else
	{
		cout << "Erro, saldo inválido para sacar." << endl;
		system("pause>null");
	}
}

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolha;
	float dinheiro = 0, limite = 0;
	string nome;
	Conta a(nome, dinheiro, limite);
	

	//Cadastro
	cout << "Titular: ";
	cin >> nome;
	a.setTitular(nome);
	system("cls");
	cout << "Limite de saque: ";
	cin >> limite;
	a.setLimite(limite);
	system("cls");

	do
	{
		cout << "Saldo: ";
		cin >> dinheiro;
		system("cls");

		if (dinheiro < 0)
		{
			cout << "Não aceitamos saldo negativo." << endl;
			system("pause>null");
			system("cls");
		}
	} while (dinheiro < 0);

	a.setSaldo(dinheiro);
	system("cls");

	//Repetição do menu
	do
	{
		cout << "Bom dia " << a.getTitular() << endl;
		a.printar();
		cout << endl;
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
		}

		else if (escolha == 2)
		{
			a.printar();
			a.saque();
			system("cls");
		}

		else if (escolha > 3 || escolha < 1)
		{
			cout << "ERRO! Somente 1, 2 ou 3" << endl;
			system("pause");
			system("cls");
		}
	} while (escolha != 3);

	system("pause");
}