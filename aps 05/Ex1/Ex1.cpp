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

	//Setters e Getters
	Conta a(string xTitular, float xSaldo)
	{
		setTitular(xTitular);
		setSaldo(xSaldo);
		setLimite();
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
	void setLimite()
	{
		limite = getSaldo();
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
}

//Adiciona na variável saldo a quantidade desejada
void Conta::deposito()
{
	float quantidade;
	cout << "Digite a quantidade para depositar: " << endl;
	cin >> quantidade;
	setSaldo(saldo + quantidade);
}

//Se o saldo for positivo e a quantidade indicada for menor que o limite, ele saca
void Conta::saque()
{
	float quantidade;
	setLimite();

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
			cout << "Erro! Quantidade maior que saldo." << endl;
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
	float dinheiro;
	string nome;
	Conta a;

	//Cadastro
	cout << "Titular: ";
	cin >> nome;
	a.setTitular(nome);
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