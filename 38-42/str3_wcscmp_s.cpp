#include <wchar.h>

	int Strcmp(const wchar_t* str1, const wchar_t* str2)
	{
		// ���ڸ����� �ϳ��� ��
		// 1. 0�̸� ���� ���� ��
		// 2. 1�̳� -1 ������ return
		// �ݺ�
	
		// abc abbc
		int i = 0;
		while (true)
		{
			if (str1[i] == str2[i])
			{
				if (str1[i] == '\0' && str2[i] == '\0')
				{
					return 0;
				}
				++i;
			}
			else if (str1[i] > str2[i])
			{
				return 1;
			}
			else if (str1[i] < str2[i])
			{
				return -1;
			}
		}
	}

int main()
{
	// ���ĺ� ������ - ������  = 1
	// ���ĺ� ������ - ������  = 0
	// ���ĺ� ������ - ������  = -1
	// �޸𸮿� ����� 01011010 - 0101010 �� ��� ����� 1, ������ -1, 0�̸� 0
	int iRet = Strcmp(L"abc", L"cbc");

	return 0;
}