#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void main() {
	int avtobus = 50;
	int pasjiri = 126;
	int avtobus2 = pasjiri - avtobus;
	int ostatok = avtobus2 - avtobus;
	int ostatok2 = avtobus - ostatok;
	cout << ostatok2;

	system("pause");
	return 1;
}