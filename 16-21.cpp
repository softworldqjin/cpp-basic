#include <stdio.h>

//����� ���� �ڷ���, C ��Ÿ���� typedef�ٿ���..
typedef struct _tagMySt
{
	int a;
	float f;
}MYST; //_tagMySt�� MYST�� ������

typedef struct _tagBig
{
	MYST k; //����ü �ȿ� ����ü�� ���� �� �ִ�.
	int i;
	char c;
}Big; //_tagBig�� Big���� ������

typedef int INT; //int�� ���ο� �̸��̴�. INT�� int�ڷ����̴�.
					  
int Add(int a, int b) 
{						//stack������ 
	int i;				//Add() a, b, i - > return a + b �������Ϳ� ��� �����ϰ� ���� ����
	return a + b;		//main() iData
}

int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	//Factorial(10); �̰Ÿ� ���� stack�� ��� �׿��� �ᱹ stackoverflow �߻�
	//����Լ�
	//������, ������ ����

	return iValue;
}

//����Լ� ���丮��
int Factorial_Re(int _iNum)
{
	if (_iNum == 1) return 1;

	return _iNum * Factorial_Re(_iNum - 1);

}

//����Լ� �Ǻ���ġ ����
int Fibo(int _iNum)
{
	if (_iNum == 1 || _iNum == 2) return 1;

	return Fibo(_iNum - 2) + Fibo(_iNum - 1);
	
}

//�ݺ������� �Ǻ���ġ ����
int Fibo_loop(int _iNum)
{
	if (_iNum == 1 || _iNum == 2) return 1;
	
	int num1 = 1, num2 = 1;
	int sum = 0;

	//3�̸� 1��, 4�̸� 2��, 5�̸� 3�� ���
	for (int i = 0; i < _iNum - 2; ++i)
	{	
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
	}
	return sum;
}

int main()
{
	//_tagMySt s;	 ���� �߻�
	//struct tagMySt ����ü ���������� ������ struct�� �� �ٿ��ߵ�
	
	//����ü
	MYST t = {};
	//MYST t = {100, 3.14f}; ���� �� ���� ����
	t.a = 10;
	t.f = 10.121f;
	//int iSize = sizeof(MYST); -> 4byte 4byte -> 8byte
	
	

	int iData = Add(100, 200);
	int iValue = Factorial(9); //�극��ũ ����Ʈ �ɰ�, F11�� ȣ�⽺�� Ȯ�� ���� 

	int rValue = Factorial_Re(4);
	//printf("%d", rValue);

	rValue = Fibo_loop(30);
	printf("%d", rValue);

	//�迭
	//�޸𸮰� ������
	int iArray[10] = {0}; 
	//int iArray[10] = {1,2,3,4}; �ϸ� ��ä���� �������� 0���� �ʱ�ȭ��.

	return 0;
}