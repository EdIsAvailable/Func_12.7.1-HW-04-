
// ���������� �� ������ � ��������- ���������� string temp � ��� ���������� ������
#include"Func.h"
//���������� ������� "IsKPeriodic"
int IsKPeriodic(int k, string letters) 
{
	bool m = false;
	int n = 1;
	if (letters.length() % k)         // �������� �� ��������� "k" ���� ������ ���� ���, �� ����� �����
		return 0;

	//�������� ��������� - strEtalon
	string strEtalon = letters.substr(0, k);
	// ��������� ������� ������
	string strProcess = letters.substr(k, letters.length() - k);
	// ��������� ������� ����������� �����, ���� � ������ �������� �������
	while (strProcess.length() > 0)
	{
		// ����������� ������� �������� ��������� tmp
		string tmp = strProcess.substr(0, k);

		// ���������� � ��������� ����������
		if (tmp != strEtalon)
			return 0;
		// �������� ��������� �� ������� ������
		strProcess = strProcess.substr(k, strProcess.length() - k);
	}
}