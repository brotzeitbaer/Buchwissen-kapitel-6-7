#include <iostream>

using namespace std;

void berechnepunkte (int &punkte, int bonus);

int main()
{
	
	int punkte = 500;
	int bonus  = 250;
	
	cout << "punkte vor der  funktion: " << punkte << endl;
	
	berechnepunkte (punkte, bonus);
	
	cout << "punkte nach der funktion: " << punkte << endl;
	
	return 0;
	
}

void berechnepunkte (int &punkte, int bonus)
{
	punkte += bonus;
}
