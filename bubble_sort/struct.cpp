#include <iostream>
#include "malloc.h"

int main()
{
	InitArr s1;

	InitArr1(&s1);

	/*for (int i = 0; i < 10; ++i)
	{
		AddArr(&s1, i);
	}*/

	AddArr(&s1, 1);
	AddArr(&s1, 5);
	AddArr(&s1, 3);
	AddArr(&s1, 9);
	AddArr(&s1, 7);
	
	BubbleSort(&s1);

	for (int i = 0; i < s1.iCount; ++i)
	{
		printf("%d ", s1.iPtr[i]);
	}

	// bubble sort ÇÏ·§ÀÝÀ½

	Release(&s1);

}