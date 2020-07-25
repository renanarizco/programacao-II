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

	//Nome
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
	void setLimite(float xLimite)
	{
		limite = xLimite;
	}
	float getLimite()
	{
		return limite;
	}
};

class Titular
{
private:
	string cpf;
	int idade;
public:
	void mostrar();

	//Constructor 1
	Titular(int xIdade)
	{
		setIdade(xIdade);
	}

	//Constructor 2
	Titular(int xIdade, string xCpf)
	{
		setIdade(xIdade);
		setCpf(xCpf);
	}

	//Idade
	void setIdade(int xIdade)
	{
		idade = xIdade;
	}
	int getIdade()
	{
		return idade;
	}

	//CPF
	void setCpf(string xCpf)
	{
		cpf = xCpf;
	}
	string getCpf()
	{
		return cpf;
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

void Titular::mostrar()
{
	cout << "Idade: " << getIdade() << endl;
	cout << "CPF: " << getCpf() << endl;
}

void main()
{
	setlocale(LC_ALL, "Portuguese");

	int escolha, anos = 0;
	float dinheiro = 0, limite = 0;
	string pessoa, cpf;
	Conta a(pessoa, dinheiro, limite);
	Titular b(anos, cpf);


	//Cadastro
	cout << "Titular: ";
	cin >> pessoa;
	a.setTitular(pessoa);
	system("cls");

	cout << "Idade: ";
	cin >> anos;
	b.setIdade(anos);
	system("cls");

	cout << "CPF: ";
	cin >> cpf;
	b.setCpf(cpf);
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
		cout << "3- Mostrar dados" << endl;
		cout << "4- Sair" << endl;
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

		else if (escolha == 3)
		{
			cout << "Titular " << a.getTitular() << endl;
			b.mostrar();
			a.printar();
			system("pause>null");
			system("cls");
		}

		else if (escolha > 4 || escolha < 1)
		{
			cout << "ERRO! Somente 1, 2, 3 ou 4" << endl;
			system("pause");
			system("cls");
		}
	} while (escolha != 4);

	system("pause");
}