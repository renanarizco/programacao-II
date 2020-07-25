#include <iostream> 
using namespace std; 

int main() 
{ 
    setlocale(LC_ALL, "Portuguese");
    
    float const PI = 3.14;
    float raio, area; 
    
    cout << "Digite o raio: ";
    cin >> raio;
    

    area = PI * raio * raio;
    
    cout << "Area = " << area << endl;
    
    return 0;
} 
