#pragma once
class CArr // 16byte �ڷ��� | 8byte | 4byte | 4byte |
{
private:
	int* m_pInt;
	int m_iCount;
	int m_iMaxCount;

public:
	CArr();
	~CArr();

public:
	void PushBack(int _iData);	// ���� �����͸� ������ ��
								// ��ü �����ǰ�, ����Լ� ȣ���ϸ�, this ������ ����
								// this-> �ϸ� �ش� ��ü�� �ּ��� (heap�� ����� �޸� �κ�)..���� �����ϸ� ��
	void Resize(int _iCount);;

	int& operator[] (int i);
};

