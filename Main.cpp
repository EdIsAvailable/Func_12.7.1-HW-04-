#include"Func.h"
#include<iostream>
#include<vector>
using namespace std;



int main() {
	int k = 3;
	string letter;
	cout << "Enter k: ";
	cin >> k;
	cout << "Enter string: ";
	cin >> letter;

	int isPeriodic = IsKPeriodic(k, letter);

	if(isPeriodic)
		cout << "Yes" << endl;
	else cout << "No" << endl;

	
	return 0;
}