#include "CList.h"

int main()
{
	CList<int> list; // CList class���������, list �ν��Ͻ� ����

	for (int i = 0; i < 4; ++i)
	{
		list.push_back(i);
	}


	return 0;
}