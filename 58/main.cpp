#include "CList.h"
#include <iostream>
#include <clocale>

namespace hello
{
	int hello;
}

namespace std
{
	int hello;
}

class CTest
{
private:
	int m_i;

public:
	// ��ü ���� ȣ�� ����
	static void MemeberFunc()
	{

	}
};

// using namespace std; -> std ��ü�� ������
using std::cin;
using std::cout;
using std::endl;

void MyEndl() // ��ȯ Ÿ���� void�̰� ���ڸ� �����ʴ�.. 
{
	printf("\n");
}

class CMy // �ƹ��͵� ���� �ȵǾ������� 1btye
{
public:
	CMy& operator << (int _iData)	// ������ �����ε�, << �굵 �Լ����� .operator<< ȣ���ϴ� �Լ�
	{								// myCount << 3 ���� myCount.operator<<(3)
		
		printf("%d ", _iData);
		return *this;
	}

	CMy& operator << (const wchar_t* _string) // 2btye�� �ؼ�,, �ѱ��� �� ���ڴ� 2byte�̱� ������,,
	{
		printf("%s ", _string);
		return *this;
	}

	CMy& operator >> (int& _iData)
	{
		scanf_s("%d", &_iData);
		return *this;
	}

	CMy& operator << (void(*_funcPoint)(void))
	{
		_funcPoint();
		return *this;
	}
};

CMy myCout;

// �����ε�, ���� �̸��� �Լ��� ���� �� �����ϴ� ��
// �������̵�, ��Ӱ��迡�� �θ� Ŭ������ �Լ��� �ڽ� Ŭ�������� �������ϴ� ��



// extern -> ���� ���Ͽ��� ���� �����ϰ�, �ϳ��� ���Ͽ� �����س���, �ٸ� ���Ͽ��� ���� �� ���� ����
int main()
{

	cout << 3 << endl;

	CTest::MemeberFunc();
	
	hello::hello;
	std::hello;

	// hello = 0; <- error �߻�, hello ���� ����

	myCout << 3 << 4 << 5 << MyEndl;
	/*myCout << L"�ȳ�";*/

	int a = 0;
	myCout >> a;

	printf("%d", a);

	return 0;
}