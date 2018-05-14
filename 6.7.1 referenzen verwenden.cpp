#include <iostream>

using namespace std;

int main()
{
	int area = 100;
	int &rarea1  = area;
	int &rarea2  = area;
	
	cout << "wert   area: (original   wert) " << area   <<   endl;
	cout << "wert rarea1: (referenz wert 1) " << rarea1 <<   endl;
	cout << "wert rarea2: (referenz wert 2) " << rarea2 << "\n\n";

	area += 50;

	cout << "wert    area: (original  wert) " << area   <<   endl;
	cout << "wert  rarea1: (referenz wert1) " << rarea1 <<   endl;
	cout << "wert  rarea2: (referenz wert2) " << rarea2 << "\n\n";
	
rarea1 += 75;

	cout << "wert    area: (original  wert) " << area   <<   endl;
	cout << "wert  rarea1: (referenz wert1) " << rarea1 <<   endl;
	cout << "wert  rarea2: (referenz wert2) " << rarea2 << "\n\n";
	
rarea2 += 25;

	cout << "wert    area: (original  wert) " << area   <<   endl;
	cout << "wert  rarea1: (referenz wert1) " << rarea1 <<   endl;
	cout << "wert  rarea2: (referenz wert2) " << rarea2 << "\n\n";
	
	return 0;
}
