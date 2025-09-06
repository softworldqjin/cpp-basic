#include <wchar.h>
#include <assert.h> // 경고 발생

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

// 함수 오버로딩
void Test(int a)
{

}

void Test(float a)
{

}

void StrCat(wchar_t* _pDest, unsigned int _iBufferSize, const wchar_t* _pSrc)
{
	// 예외처리
	// 붙일 목적지, 붙일 소스 + '\0' 이 원본 배열의 크기를 초과한다면 error 발생시킴
	int iDestLen = GetLength(_pDest);
	int iSrcLen = GetLength(_pSrc);
	if ((iDestLen + iSrcLen + 1) > _iBufferSize) // + 1 하는 이유는 '\0' 문자때문에 
	{
		assert(nullptr);
	}
	
	// 항상 해야될 일을 정리하고, 코드 작성
	// 문자열 이어 붙이기
	// | a | b | c | \0 | 에서 '\0' 부터 이어붙여야 된다
	// 1. Dest 문자열의 끝을 확인 (Src 문자열이 붙을 위치임)
	// 2. 반복적으로 Src 문자열을 Dest 끝 위치부터 붙여넣기
	// 3. Src의 '\0'을 만나면 반복 중단

	for (int i = 0; i < iSrcLen + 1; ++i)
	{
		*(_pDest + iDestLen + i) = *(_pSrc + i);
	}

}
int main()
{
	// 문자열 이어 붙이기
	Test(10);
	Test(4.15f);

	wchar_t szString[100] = L"abc";

	//wcscat_s(szString, 100, L"def");	// "szString에 'def'를 이어붙이는데
										// szString 배열의 크기가 100개(wchar_t 단위)임을 보장한다"

	//wcscat_s(szString, 1000, L"asdasdadasdadasd");	// szString의 첫 주소로부터 1000칸을 보장한다
													// szString 초과해서 그 뒤에 메모리에 write

	StrCat(szString, 100, L"def");


	return 0;

}

// 단축키
// shift end 커서 뒤 한줄 드래그