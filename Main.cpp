#include"Func.h"
#include<iostream>
#include<vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int k = 3;
	string letter;
	cout << "Введите число k: ";
	cin >> k;
	cout << "Введите строку для проверки: ";
	cin >> letter;

	int isPeriodic = IsKPeriodic(k, letter);

	if(isPeriodic)
		cout << "Строка кратна числу k" << endl;
	else cout << "Строка НЕкратна числу k" << endl;

	
	return 0;
}