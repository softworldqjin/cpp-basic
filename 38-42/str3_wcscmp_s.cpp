#include <wchar.h>

	int Strcmp(const wchar_t* str1, const wchar_t* str2)
	{
		// 앞자리부터 하나씩 비교
		// 1. 0이면 다음 문자 비교
		// 2. 1이나 -1 나오면 return
		// 반복
	
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
	// 알파벳 늦은거 - 빠른거  = 1
	// 알파벳 같은거 - 같은거  = 0
	// 알파벳 빠른거 - 늦은거  = -1
	// 메모리에 저장된 01011010 - 0101010 의 결과 양수면 1, 음수면 -1, 0이면 0
	int iRet = Strcmp(L"abc", L"cbc");

	return 0;
}