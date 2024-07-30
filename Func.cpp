// сначала проверка на кратность к всей строки если нет, то сразу выход
// откусываем из строки е символов- переменная string temp в ней оставшаяся строка
#include"Func.h"
int IsKPeriodic(int k, string letters)
{
	bool m = false;
	int n = 1;
	if (letters.length() % k)
		return 0;

	//polu4aem periodi4nuyu stroku - etalon
	string strEtalon = letters.substr(0, k);
	//ostatok
	string strProcess = letters.substr(k, letters.length() - k);

	while (strProcess.length() > 0)
	{
		//polu4aem pervye k simvolov
		string tmp = strProcess.substr(0, k);

		//sravnivaem tmp s etalonom
		if (tmp != strEtalon)
			return 0;

		strProcess = strProcess.substr(k, strProcess.length() - k);
	}
}