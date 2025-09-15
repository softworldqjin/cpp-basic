#include "CList.h"

int main()
{
	CList<int> list; // CList class만들어지고, list 인스턴스 생성

	for (int i = 0; i < 4; ++i)
	{
		list.push_back(i);
	}


	return 0;
}