#include <iostream>

using namespace std;

int main()
{
//	variablen

	int punkte = 500;
	float fgeschwindigkeit = 20.08;
	
/*  zeiger auf variable ( das "p" ist nur als hilfe um zu wissen dass es sich um einen pointer handelt)
    "NULL" bedeutet hier dass der Zeiger erstmal auf null gesetzt wird,
	ein zeiger der so initialisiert wurde, nennt man "null zeiger".*/
	
	int *ppunkte = NULL;
	float *pgeschwindigkeit = NULL;

//	zeiger initialisieren (adresse zuweisen)

	ppunkte = &punkte;
	pgeschwindigkeit = &fgeschwindigkeit;
	
/*  Das sternchen bewirkt bei der ausgabe dass indirekt auf den wert der variablen zugegriffen wird.
ohne sternchen wird der speicherort ausgegeben. Das sternchen wird INDIREKTIONSOPERATOR genannt*/	

	cout << "Die Adresse der Variablen \"punkte\"           lautet: " << ppunkte           << endl;
	cout << "Der Wert der Variablen \"punkte\"              lautet: " << *ppunkte          << endl;
	cout << "Die Adresse der Variablen \"pgeschwindigkeit\" lautet: " << pgeschwindigkeit  << endl;
	cout << "Der Wert der Variablen \"pgeschwindigkeit\"    lautet: " << *pgeschwindigkeit << endl;

return 0;
	
}
