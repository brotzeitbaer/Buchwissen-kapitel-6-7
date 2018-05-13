#include <iostream>

using namespace std;

void berechnepunkte(int *ppunkte, int bonus);

int main()
{
	int punkte = 500;
	int bonus  = 120;
	
	cout << "punkte vor  dem funktionsaufruf: " << punkte << endl;
	
	berechnepunkte (&punkte, bonus);
	
	cout << "punkte nach dem funktionsaufruf: " << punkte << endl;
	
	return 0;
	
}

// übergabe der variablen per zeiger nennt man "call by reference".
// übergabe der variablen direkt nennt man "call by value".

void berechnepunkte(int *ppunkte, int bonus)
{
	
//	ohne return mit hilfe des zeigers variablen berechnen und verändern.

	*ppunkte += bonus;
}
