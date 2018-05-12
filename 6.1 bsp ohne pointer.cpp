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

s_spieler nameabfragen (s_spieler spieler);

int main()
{
	
	s_spieler spieler1;
	
	
	spieler1.energie = 1000;
	spieler1.punkte = 0;
	spieler1.xposition = 0;
	spieler1.yposition = 0;
	spieler1.name[0] = '\0';
	
	spieler1 = nameabfragen(spieler1);
	cout << "neuer spieler: " << spieler1.name << endl;
	
	return 0;
}

s_spieler nameabfragen (s_spieler spieler)
{
	cout << "name des spielers: " << endl;
	cin.get(spieler.name, 29);
	
	return spieler; 
}
