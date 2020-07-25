#include <iostream>
#include <locale>  
using namespace std;  

int main()  
{  
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, num, fat = 1;   
	
	cout << "Digite um número: ";    
	cin >> num;    
	
	//Loop para multiplicar a variavel fatorial * indice
	for(i = 1; i <= num; i++) 
	{    
    	fat = fat * i;  
	}
	    
  cout << "O fatorial de " << num << " é: " << fat;   
}  
