
// откусываем из строки е символов- переменная string temp в ней оставшаяся строка
#include"Func.h"
//реализация функции "IsKPeriodic"
int IsKPeriodic(int k, string letters) 
{
	bool m = false;
	int n = 1;
	if (letters.length() % k)         // проверка на кратность "k" всей строки если нет, то сразу выход
		return 0;

	//Получаем подстроку - strEtalon
	string strEtalon = letters.substr(0, k);
	// Вычисляем остаток строки
	string strProcess = letters.substr(k, letters.length() - k);
	// обозначим условие продолжения цикла, пока в строке остаются символы
	while (strProcess.length() > 0)
	{
		// Присваиваем остаток символов перменной tmp
		string tmp = strProcess.substr(0, k);

		// Сравниваем с эталонной подстрокой
		if (tmp != strEtalon)
			return 0;
		// отнимаем подстроку от остатка строки
		strProcess = strProcess.substr(k, strProcess.length() - k);
	}
}