#include <stdio.h>

//사용자 정의 자료형, C 스타일은 typedef붙여서..
typedef struct _tagMySt
{
	int a;
	float f;
}MYST; //_tagMySt를 MYST로 재정의

typedef struct _tagBig
{
	MYST k; //구조체 안에 구조체가 있을 수 있다.
	int i;
	char c;
}Big; //_tagBig을 Big으로 재정의

typedef int INT; //int의 새로운 이름이다. INT는 int자료형이다.
					  
int Add(int a, int b) 
{						//stack영역에 
	int i;				//Add() a, b, i - > return a + b 레지스터에 잠깐 저장하고 변수 삭제
	return a + b;		//main() iData
}

int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	//Factorial(10); 이거만 쓰면 stack에 계속 쌓여서 결국 stackoverflow 발생
	//재귀함수
	//가독성, 구현의 용이

	return iValue;
}

//재귀함수 팩토리얼
int Factorial_Re(int _iNum)
{
	if (_iNum == 1) return 1;

	return _iNum * Factorial_Re(_iNum - 1);

}

//재귀함수 피보나치 수열
int Fibo(int _iNum)
{
	if (_iNum == 1 || _iNum == 2) return 1;

	return Fibo(_iNum - 2) + Fibo(_iNum - 1);
	
}

//반복문으로 피보나치 수열
int Fibo_loop(int _iNum)
{
	if (_iNum == 1 || _iNum == 2) return 1;
	
	int num1 = 1, num2 = 1;
	int sum = 0;

	//3이면 1번, 4이면 2번, 5이면 3번 계산
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
	//_tagMySt s;	 오류 발생
	//struct tagMySt 구조체 재정의하지 않으면 struct를 꼭 붙여야됨
	
	//구조체
	MYST t = {};
	//MYST t = {100, 3.14f}; 선언 및 정의 가능
	t.a = 10;
	t.f = 10.121f;
	//int iSize = sizeof(MYST); -> 4byte 4byte -> 8byte
	
	

	int iData = Add(100, 200);
	int iValue = Factorial(9); //브레이크 포인트 걸고, F11로 호출스택 확인 가능 

	int rValue = Factorial_Re(4);
	//printf("%d", rValue);

	rValue = Fibo_loop(30);
	printf("%d", rValue);

	//배열
	//메모리가 연속적
	int iArray[10] = {0}; 
	//int iArray[10] = {1,2,3,4}; 하면 안채워진 나머지는 0으로 초기화됨.

	return 0;
}