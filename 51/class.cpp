#include <iostream>
#include "malloc.h"
struct tMy
{

};

class CMy
{			// ������, �Ҹ��ڴ� �� �־�� �ȴ�.
			// ���� ������, �Ҹ��ڸ� �Խ����� ������ �ڵ����� �����ȴ�.
			// (�ƹ���� ���� ������, �Ҹ��ڸ�)

public:		// �⺻ ���� �����ڴ� private�̴�.
			// public ���������ָ� class�� ��ü ������

	CMy()	// ������
		: a(10)
		, b(3.1)
	{
	}	// CMy a; -> class�� ��ü(instance)�� ������ �� �ڵ����� ȣ���

	~CMy()	// �Ҹ���, main�Լ� ����Ǳ� ���� class �Ҹ��� ȣ���
	{

	}


private:
	int a;				// ���
	float b;
public:
						
	void setA(int i)	// ����Լ�, ��ü.�Լ�() �� ȣ�� ����
	{
		a = i;
	}
	void printA()
	{
		printf("%d\n", a);
	}
};
int main()
{
	// struct���� ����� ������ ������ ���ٰ�����
	// class���� ���������ڷ� private public protected(���)���� ���� ���� ������
	InitArr arr = {};
	InitArr1(&arr);

	AddArr(&arr, 10);
	arr.iCount = 10;

	CMy kk;

	kk.setA(3);
	kk.printA();

	return 0;
	
}