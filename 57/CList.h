#pragma once

template<typename T>
struct tListNode
{
// �⺻ ���� ������ public:
	T				data;
	tListNode<T>*	pPrev;
	tListNode<T>*	pNext;

	// �⺻ ������
	tListNode()
		: data()
		, pPrev(nullptr)
		, pNext(nullptr)
	{

	}

	// �����ڵ� �����ε� ����
	tListNode(const T& _data, tListNode<T>* _pPrev, tListNode<T>* _pNext)
		: data(_data)
		, pPrev(_pPrev)
		, pNext(_pNext)
	{

	}
};

template<typename T>
class CList
{
// �⺻ ���� ������ private:
private:
	tListNode<T>*	m_pHead; // tListNode<float> ����ü ���� ����, m_pHeadNode = nullptr;
	tListNode<T>*	m_pTail;
	int				m_iCount;

public:
	void push_back(const T& _data);
	void push_front(const T& _data);

public:
	CList();
	~CList();
};

template<typename T>
void CList<T>::push_back(const T& _data)
{	
	// �Էµ� �����͸� ������ ��带 �����Ҵ� ��
	tListNode<T>* pNewNode = new tListNode<T>(_data, nullptr, nullptr); // tListNode(a,a,a) ������ ȣ��
	// pNewNode->data = _data;
	// pNewNode->pPrev = nullptr;
	// pNewNode->pNext = nullptr;

	// ó�� �Էµ� �����Ͷ��
	if (m_pHead == nullptr)
	{
		// ó�� �Էµ� �����Ͷ��
		m_pHead = pNewNode;
		m_pTail = pNewNode;
	}
	else
	{
		// �����Ͱ� 1�� �̻󿡼� �Էµ� ���.. ������ ��带 �˾ƾ� ������ �� ����
		// ���� ���� ������ ������(tail)�� �����ϰ� �ִ� ��尡
		// ���� ������ ��尡 ���� ����Ű�� �Ѵ�.
		m_pTail->pNext = pNewNode;
		pNewNode->pPrev = m_pHead;

		// ������ ��带 ���� �����Ҵ�� �ּҷ�.. 
		m_pTail = pNewNode;
	}
	// ������ ���� ����
	++m_iCount;
}

template<typename T>
void CList<T>::push_front(const T& _data)
{	
	// ���� ������ ����� ������ ���� ������� �ּҰ����� ����
	tListNode<T>* newNode = new tListNode<T>(_data, nullptr, m_pHead);

	// ���� ������� ���� ���� ������ ���� ����
	m_pHead->pPrev = newNode;

	// ���� ����带 ���� ������ �ּҰ����� ����
	m_pHead = newNode;

	// ������ ���� ����
	++m_iCount;
}

template<typename T>
CList<T>::CList()
	: m_pHead(nullptr)
	, m_pTail(nullptr)
	, m_iCount(0)
{

}

template<typename T>
CList<T>::~CList()
{
	tListNode<T>* pDeleteNode = m_pHead;
	tListNode<T>* pNext = nullptr;

	while (pDeleteNode)
	{
		pNext = pDeleteNode->pNext;
		delete pDeleteNode;
		pDeleteNode = pNext;
	}
}

