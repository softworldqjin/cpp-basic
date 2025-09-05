#include <wchar.h>

// 메모리 영역
// 1. 스택
// 2. 데이터
// 3. 힙
// 4. ROM(코드영역) Read Only Memory 이거 건드리면 runtime에 터짐

int main()
{

	// 문자
	wchar_t wc = 65;	// 2byte 문자열(16비트), 문자로 해석하겠다.
						// 2^16까지 표현가능, 한글이 5만~~이라 wchar_t 가 좋다
	short s = 49;

	char c = 1;			// 숫자 1을 저장해라 -> 1 저장
	c = '1';			// 문자 1을 저장하라 -> 49 저장

	wc = 459;			// 459	
	"459";				// 문자4 따로 문자 5 따로 문자 9 따로
						// | 52 | 53 | 57 | 0 | <- 문자의 끝임을 알림, 문자의 개수로 치지 않음
						// 문자 \0 넣기
						// 이것을 a[3] = '\0'

	// 정수
	// short int long
	// 문자
	// char(1), wchar(2)

	char z = 'a';
	wchar_t wd = L'a';

	char szChar[10] = "abcdef";			// ROM에 있는 abcdef, 10칸에 a b c d e f 0 하나씩 복사
	wchar_t szWchar[7] = L"abcdef";		// 문자 하나 하나가 2byte, '\0' 까지 합쳐서 총 8개
	const wchar_t* pChar = L"abcdef";	// ROM에 있는 L"abcdef" 한 칸당 2byte 배열의 첫번째 주소 반환
										// 2byte 단위씩 해석하는 pChar 포인터 변수
										// ROM에 있는 거니까 접근은 해도, write는 하면 안되므로(const)


	szChar[1] = 'z';

	// write 안됨
	// *(pChar + 1) = 'z';
	// pChar[1] = 'z';
	

	short arrshort[10] = { 97, 98, 99, 100, 101, 102 };

	{
		char szTest[10] = "abc한글";

		wchar_t szTestW[10] = L"abc한글";
	}

	{
		wchar_t szName[10] = L"Raimond";

		int iLen = wcslen(szName);	
									// 문자열의 시작주소를 넘겨서 확인하자
									// const wchar_t 주소
									// L"Raimond"는 ROM에 있으므로 const 선언되있음
									// (주소)가리키는 값을 write하면 안되니까.
	}

	return 0;
}

// ctrl + shift + enter 함수 선언 원본 보기