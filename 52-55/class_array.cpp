#include "CArr.h"

class CTest
{
private:
	int a;

public:
	CTest()
		: a(10)
	{

	}
};

int main()
{
	// ����ü --> Ŭ����

	// ��ü���� ��� Ư¡
	// 1. ĸ��ȭ
	// ����� �����ϱ� ���� �ʿ��� ��� ����, ����, ���м�
	// ��� �Լ���

	// 2. ���

	// 3. ������

	// 4. �߻�ȭ

	// ����ü ���� �����迭 -> Ŭ���� ����

	// C++ �����Ҵ� new, delete
	CTest* pTest = new CTest;	// heap�� �����Ҵ��ϰ�, �ڷ��� CTest�� 4byteȮ���ϰ�
								// ������� �ʱ�ȭ�ؼ� �ּ� ��ȯ����.
								// CTest �����ͷ� �޴� ����? CTest�ڷ������� Ȯ���� ����, 4byte ���� �ؼ��ϱ� ����
								
								// malloc ���� ������ ,, ������� byte�� Ȯ���ϰ� �ּ� ��ȯ
	delete pTest;

	// CArr ����
	CArr _a;
	_a.PushBack(3);
	_a.PushBack(4);
	_a.PushBack(5);

	//int iData = _a[1];

	int iData = _a[1];
	_a[1] = 100;

	return 0;
}