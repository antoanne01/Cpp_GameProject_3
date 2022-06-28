#include <iostream>
#include <string>
#include <Windows.h>

#include "Shortest_Path.h"

using namespace std;

int main()
{

	int x = 20;
	int y = 40;

	Shortest_Path path(x, y);
	cout << "insert bellow, A:" << endl;
	cout << "x: "; 
	cin >> x; 
	cout << "y: "; 
	cin >> y;

	path.set_A(x, y);


	cout << endl;
	cout << "insert bellow, B:" << endl;
	cout << "x: "; 
	cin >> x; 
	cout << "y: "; 
	cin >> y;

	path.set_B(x, y);

	do
	{
		system("cls");
		cout << path.run();
		Sleep(100);
	} while (path.temp_one() != path.real_one());

	return 0;
}

