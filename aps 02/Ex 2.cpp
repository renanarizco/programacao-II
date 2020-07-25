#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int num, t1 = 0, t2 = 1, proximo = 0;

    cout << "Digite a quantidade de numeros da sequência de Fibonacci: " << endl;
    cin >> num;

    cout << "Sequência de Fibonacci: " << endl;


    if(num == 1)
    {
        cout << "0 ";
    }
    
    else if (num == 2)
    {
        cout << "0 ";
        cout << "1 ";
    }
    //Se n = 1 ou 2 ele já diz direto o resultado sem fazer a conta.
    
    else if (num > 2)
    {
		cout << "0 ";
		cout << "1 ";
        
    	for (int i = 1; i <= num -2; ++i)
    	//o For tem i <= num -2 pois se não tivesse ele colocaria 2 numeros a mais na sequência, porque em cima já disse pra dar cout no 0 e 1.
    	{
        	proximo = t1 + t2;
        	t1 = t2;
        	t2 = proximo;
        
        	cout << proximo << " ";
    	}
    }
}
