#include <stdio.h>
#include "func.h"
#include "common.h" // �������� ������ ��������� ��ó��(����)�Ѵ�. == ���� �� ���Ǹ� ���⼭ �� �� ��
					// ������ �� ���Ͽ����� �ν� �� ���ٰ���


int Add(int a, int b)
{
	printf("func.cpp���� ���� �� ���� �� g_iStatic: %d\n", g_iStatic); 
											//func.cpp���� g_iStatic�� 0�� 
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}