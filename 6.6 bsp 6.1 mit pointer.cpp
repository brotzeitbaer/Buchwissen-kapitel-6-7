#include <iostream>

using namespace std;

struct s_spieler
{
	
	int energie;
	int punkte;
	int xposition;
	int yposition;
	char name[30];
	
};

s_spieler nameabfragen (s_spieler *pspieler);

int main()
{
	
	s_spieler spieler1;
	
	spieler1.energie = 1000;
	spieler1.punkte     = 0;
	spieler1.xposition  = 0;
	spieler1.yposition  = 0;
	spieler1.name[0] = '\0';

	cout << "Punkte vor der Funktion: " << spieler1.punkte << endl << endl;
	
	nameabfragen (&spieler1);
	
	cout << "Neuer  Spieler: " << spieler1.name   << endl;
	cout << "Neue Punktzahl: " << spieler1.punkte << endl;
	
	return 0;
	
}

s_spieler nameabfragen (s_spieler *pspieler)
{
	
	cout << "Name des Spielers: \n";
	cin.get(pspieler->name,29);
	
	cout << "Punkte eingeben: \n";
	cin  >> pspieler->punkte; 
	
}
