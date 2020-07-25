#include <iostream> 
using namespace std; 

int main() 
{ 
    setlocale(LC_ALL, "Portuguese");
    int num; 
    float harmonico = 1;
    //Define a variavel harmonico como 1
    
    cout << "Digite um número: ";
    cin >> num;
    
    for (int i = 2; i <= num; i++) 
    { 
        harmonico += (float)1 / i; 
    }
    
	cout << "O " << num << "º número harmonico é: " << harmonico;
    //Dá a resposta de determinado numero harmonico 
} 
