#include <iostream>

int isOdd(int value)
{
	if (value % 2 == 1) return 1;
	
	return 0;
}

int isEven(int value)
{
	if (value % 2 == 0) return 1;

	return 0;
}

void showIf(int* arr, int size, int (*ptr) (int))
{
	for (int i = 0; i < size; ++i)
	{
		if (ptr(arr[i]))
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	showIf(a, 10, isOdd);
	showIf(a, 10, isEven);

	return 0;

}