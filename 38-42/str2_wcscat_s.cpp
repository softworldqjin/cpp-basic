#include <wchar.h>
#include <assert.h> // ��� �߻�

unsigned int GetLength(const wchar_t* _pStr)
{
	int i = 0;
	int count = 0;

	while (true)
	{
		if ('\0' == _pStr[i])
		{
			++count;
			++i;
		}
		else
		{
			break;
		}
	}
	return count;
}

// �Լ� �����ε�
void Test(int a)
{

}

void Test(float a)
{

}

void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
{
	// ����ó��
	// ���� ������, ���� �ҽ� + '\0' �� ���� �迭�� ũ�⸦ �ʰ��Ѵٸ� error �߻���Ŵ
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc);
	if ((iDestLen + iSrcLen + 1) > _iBufferSize) // + 1 �ϴ� ������ '\0' ���ڶ����� 
	{
		assert(nullptr);
	}
	
	// �׻� �ؾߵ� ���� �����ϰ�, �ڵ� �ۼ�
	// ���ڿ� �̾� ���̱�
	// | a | b | c | \0 | ���� '\0' ���� �̾�ٿ��� �ȴ�
	// 1. Dest ���ڿ��� ���� Ȯ�� (Src ���ڿ��� ���� ��ġ��)
	// 2. �ݺ������� Src ���ڿ��� Dest �� ��ġ���� �ٿ��ֱ�
	// 3. Src�� '\0'�� ������ �ݺ� �ߴ�

	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		*(_pDest + iDestLen + i) = *(_pSrc + i);
	}

}
int main()
{
	// ���ڿ� �̾� ���̱�
	Test(10);
	Test(4.15f);

	wchar_t szString[100] = L"abc";

	//wcscat_s(szString, 100, L"def");	// "szString�� 'def'�� �̾���̴µ�
										// szString �迭�� ũ�Ⱑ 100��(wchar_t ����)���� �����Ѵ�"

	//wcscat_s(szString, 1000, L"asdasdadasdadasd");	// szString�� ù �ּҷκ��� 1000ĭ�� �����Ѵ�
													// szString �ʰ��ؼ� �� �ڿ� �޸𸮿� write

	StrCat(szString, 100, L"def");


	return 0;

}

// ����Ű
// shift end Ŀ�� �� ���� �巡��