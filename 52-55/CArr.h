#pragma once
class CArr // 16byte 자료형 | 8byte | 4byte | 4byte |
{
private:
	int* m_pInt;
	int m_iCount;
	int m_iMaxCount;

public:
	CArr();
	~CArr();

public:
	void PushBack(int _iData);	// 들어올 데이터만 받으면 됨
								// 객체 생성되고, 멤버함수 호출하면, this 포인터 생김
								// this-> 하면 해당 객체의 주소의 (heap에 저장된 메모리 부분)..으로 생각하면 됨
	void Resize(int _iCount);;

	int& operator[] (int i);
};

