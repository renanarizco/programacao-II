#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

void main()
{
	string texto;
	int i;

	cout << "Entre com a string:" << endl;

	getline(cin, texto);

	int words[200]; // don't foreget to initialize the elements to 0
	int letterCount = 0;
	for (int i = 0; i < texto.length(); i++) {
		if (texto[i] == ' ')
		{
			if (letterCount > 0)
				words[letterCount]++;
			letterCount = 0;
		}
		else {
			letterCount++;
		}
	}

	system("pause>null");
}