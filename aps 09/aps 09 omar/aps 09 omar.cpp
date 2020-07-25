#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Veiculo_terrestre {
public:
	string modelo;
	int rodas, velocidademax;
	float gastocombustivel;

	void ligar()
	{
		system("cls");
		cout << "Ligando" << endl;
		cout << "." << endl;
		cout << ".." << endl;
		cout << "..." << endl;
		cout << "Ligado com sucesso." << endl << endl;
	}

	void desligar()
	{
		cout << "Desligando" << endl;
		cout << "..." << endl;
		cout << ".. " << endl;
		cout << "." << endl;
		cout << "Desligado com sucesso." << endl;
	}

	void buzinar()
	{
		cout << "Você buzinou" << endl;
	}
};

class Combustivel {
public:
	string tipocombustivel;
	float qntcombustivel;
};

class Moto : public Veiculo_terrestre, public Combustivel {};

class Carro : public Veiculo_terrestre, public Combustivel {};

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char resposta;
	Moto moto;
	Carro carro;

	moto.modelo = "Kawasaki Ninja";
	moto.rodas = 2;
	moto.qntcombustivel = 10;
	moto.velocidademax = 200;
	moto.tipocombustivel = "Gasolina";
	moto.gastocombustivel = 0.5;

	carro.modelo = "Honda Civic";
	carro.rodas = 4;
	carro.qntcombustivel = 10;
	carro.velocidademax = 140;
	carro.tipocombustivel = "Alcool";
	carro.gastocombustivel = 1;

	cout << "Você quer sair com sua moto ou seu carro?" << endl;
	cout << "1 - Moto" << endl;
	cout << "2 - Carro" << endl;
	cin >> resposta;

	system("cls");

	if (resposta == '1')
	{
		cout << "Digite 1 para ligar a sua " << moto.modelo << endl;
		cin >> resposta;

		system("cls");

		if (resposta == '1')
			moto.ligar();
		else
			exit(1);

		system("pause>null");
		system("cls");

		do
		{
			cout << "Andando de " << moto.modelo << "..." << endl;
			cout << "Gasolina: " << moto.qntcombustivel << " litros" << endl << endl;
			cout << "Digite 1 para buzinar" << endl;
			cout << "Digite 2 para desligar a moto ou qualquer outro para continuar" << endl;
			cin >> resposta;
			moto.qntcombustivel -= moto.gastocombustivel;

			system("cls");

			if (resposta == '1')
			{
				moto.buzinar();
				system("pause>null");
				system("cls");
			}


			if (moto.qntcombustivel <= 0)
			{
				cout << "Gasolina baixa, desligando moto." << endl;
				resposta = '2';
			}
		} while (resposta != '2');

		moto.desligar();
		system("pause>null");
		exit(1);
	}

	if (resposta == '2')
	{
		cout << "Digite 1 para ligar o seu " << carro.modelo << endl;
		cin >> resposta;

		system("cls");

		if (resposta == '1')
			carro.ligar();
		else
			exit(1);

		system("pause>null");
		system("cls");

		do
		{
			cout << "Andando de " << carro.modelo << "..." << endl;
			cout << "Gasolina: " << carro.qntcombustivel << " litros" << endl << endl;
			cout << "Digite 1 para buzinar" << endl;
			cout << "Digite 2 para desligar o carro ou qualquer outro para continuar" << endl;
			cin >> resposta;
			carro.qntcombustivel -= carro.gastocombustivel;

			system("cls");

			if (resposta == '1')
			{
				carro.buzinar();
				system("pause>null");
				system("cls");
			}

			if (carro.qntcombustivel <= 0)
			{
				cout << "Gasolina baixa, desligando carro." << endl;
				resposta = '2';
			}
		} while (resposta != '2');

		carro.desligar();
		system("pause>null");
		exit(1);

	}



	system("pause>null");
}