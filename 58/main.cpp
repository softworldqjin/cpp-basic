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
	// 객체 없이 호출 가능
	static void MemeberFunc()
	{

	}
};

// using namespace std; -> std 전체를 가져옴
using std::cin;
using std::cout;
using std::endl;

void MyEndl() // 반환 타입이 void이고 인자를 받지않는.. 
{
	printf("\n");
}

class CMy // 아무것도 선언 안되어있으면 1btye
{
public:
	CMy& operator << (int _iData)	// 연산자 오버로딩, << 얘도 함수였음 .operator<< 호출하는 함수
	{								// myCount << 3 쓰면 myCount.operator<<(3)
		
		printf("%d ", _iData);
		return *this;
	}

	CMy& operator << (const wchar_t* _string) // 2btye씩 해석,, 한글은 한 글자당 2byte이기 때문에,,
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

// 오버로딩, 같은 이름의 함수를 여러 개 정의하는 것
// 오버라이딩, 상속관계에서 부모 클래스의 함수를 자식 클래스에서 재정의하는 것



// extern -> 여러 파일에서 접근 가능하게, 하나의 파일에 선언해놓고, 다른 파일에서 정의 및 수정 가능
int main()
{

	cout << 3 << endl;

	CTest::MemeberFunc();
	
	hello::hello;
	std::hello;

	// hello = 0; <- error 발생, hello 구별 못함

	myCout << 3 << 4 << 5 << MyEndl;
	/*myCout << L"안녕";*/

	int a = 0;
	myCout >> a;

	printf("%d", a);

	return 0;
}