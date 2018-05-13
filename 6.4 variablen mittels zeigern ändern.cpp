#include <iostream>

using namespace std;

int main()
{
	int punkte = 500;
	
	int *ppunkte = NULL;
	
	ppunkte = &punkte;
	
	cout << "wert von punkte: " << *ppunkte << endl;
	
//	bedarf keiner weiteren erklärung.
	
	*ppunkte = 850;
	
	cout << "neuer      wert: " << *ppunkte << endl;
	
	return 0;
}
