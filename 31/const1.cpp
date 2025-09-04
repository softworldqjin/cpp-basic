#include <stdio.h>

int main()
{
	// 1. const
	const int i = 100;

	// const �� ������
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// const ������
	// const int* ����Ű�� �κ� ���ȭ
	const int* pConstInt = &a;	// �����Ͱ� ����Ű�� ���� ���ȭ
	*pConstInt;					// ���ٱ����� ����.
	*pConstInt = 100;			// ����Ű�� ������ write �Ұ���
					  
	int b = 0;			
	pConstInt = &b;				// ������ ���� write ����

	// const �����ͺ���
	// const �����ͺ��� ���ȭ
	int* const pIntConst = &a;	// ������ ���ȭ
	pIntConst = &a;				// ������ ������ write �Ұ���

	*pIntConst = 200;			// �����Ͱ� ����Ű�� ������ write ����

	// const ������ const
	const int* const pConstIntConst = nullptr; // ������, �����Ͱ� ����Ű�� ���� ��� ���ȭ

	// const *, * �������� �տ� const, ����Ű�� ���� ���ȭ
	// * const , * �������� �ڿ� const, ������ ���� ���ȭ
	int const* p = &a;
	*p = 100; 

	// const (���ȭ)�� ������ ������ write�� �Ұ����Ѱ���
	// *ptr = 100 XXXX, �ٸ� �����ͷ� write ����
	// ���� ����Ű�� �ִ� ���� ��ü�� ����� �Ȱ� �ƴ�.
	return 0;
}

