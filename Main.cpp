#include"Func.h"
#include<iostream>
#include<vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int k = 3;
	string letter;
	cout << "������� ����� k: ";
	cin >> k;
	cout << "������� ������ ��� ��������: ";
	cin >> letter;

	int isPeriodic = IsKPeriodic(k, letter);

	if(isPeriodic)
		cout << "������ ������ ����� k" << endl;
	else cout << "������ �������� ����� k" << endl;

	
	return 0;
}