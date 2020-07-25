#include <iostream>
#include <locale>

using namespace std;

class Computador
{
	int hd, memoria, processador, resolucao1, resolucao2, fonte;
public:
	void setarpecas();
	void printar();
};

void Computador::setarpecas()
{
	cout << "Tamanho do HD:" << endl;
	cin >> hd;
	cout << "Geração do processador:" << endl;
	cin >> processador;
	cout << "Memoria RAM:" << endl;
	cin >> memoria;
	cout << "Resolução (X):" << endl;
	cin >> resolucao1;
	cout << "Resolução (Y):" << endl;
	cin >> resolucao2;
	cout << "Fonte:" << endl;
	cin >> fonte;
	system("cls");
}


void Computador::printar()
{
	cout << "HD: " << hd << " GB" << endl;
	cout << "Memoria RAM: " << memoria << " GB" << endl;
	cout << "Processador: " << processador << "º geração" << endl;
	cout << "Resolução: " << resolucao1 << "x" << resolucao2 << endl;
	cout << "Fonte: " << fonte << "W" << endl;
	cout << endl;
}


void main()
{
	setlocale(LC_ALL, "Portuguese");
	Computador dell, samsung, microsoft;

	//Ler peças
	cout << "Samsung" << endl;
	samsung.setarpecas();
	cout << "Dell" << endl;
	dell.setarpecas();
	cout << "Microsoft" << endl;
	microsoft.setarpecas();

	//Printar peças
	cout << "Samsung" << endl;
	samsung.printar();
	cout << "Dell" << endl;
	dell.printar();
	cout << "Microsoft" << endl;
	microsoft.printar();

	system("pause>null");
}

