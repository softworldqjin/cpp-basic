#include <iostream>
#include "array.h"

//int g_i = 100;
//
//typedef struct _tagST
//{
//	int iArr[g_i]; // �迭 ������ ������ ���� ����� ����ؾ� �Ѵ�.
//}ST;

int main()
{


	// �����迭
	int a = 100;

	int iInput = 0;
	scanf_s("%d", &a);

	//int arr[a] = {};	// byte�� runtime �߿� �����ǹǷ�, �������� ����
						// ���������δ� �����迭�� ���� ����

	// �迭 ������ ������ ���� ������ ����� �� ����, ����� ��ߵ�
	// int arr[a] = {};

	// ��ü(Instance)
	// int
	// int a;

	tArr s = {};

	InitArr(&s);

	for (int i = 0; i < 10; ++i)
	{
		PushBack(&s, i);
	}

	for (int i = 0; i < s.iCount; ++i)
	{
		printf("%d\n", s.pInt[i]);
	}

	ReleaseArr(&s);

	return 0;
}

// 1. �����迭
// ������ ����

// 2. �����迭 �ȿ� ���� ������ ����
// - ���� ����
