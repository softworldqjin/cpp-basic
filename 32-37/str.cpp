#include <wchar.h>

// �޸� ����
// 1. ����
// 2. ������
// 3. ��
// 4. ROM(�ڵ念��) Read Only Memory �̰� �ǵ帮�� runtime�� ����

int main()
{

	// ����
	wchar_t wc = 65;	// 2byte ���ڿ�(16��Ʈ), ���ڷ� �ؼ��ϰڴ�.
						// 2^16���� ǥ������, �ѱ��� 5��~~�̶� wchar_t �� ����
	short s = 49;

	char c = 1;			// ���� 1�� �����ض� -> 1 ����
	c = '1';			// ���� 1�� �����϶� -> 49 ����

	wc = 459;			// 459	
	"459";				// ����4 ���� ���� 5 ���� ���� 9 ����
						// | 52 | 53 | 57 | 0 | <- ������ ������ �˸�, ������ ������ ġ�� ����
						// ���� \0 �ֱ�
						// �̰��� a[3] = '\0'

	// ����
	// short int long
	// ����
	// char(1), wchar(2)

	char z = 'a';
	wchar_t wd = L'a';

	char szChar[10] = "abcdef";			// ROM�� �ִ� abcdef, 10ĭ�� a b c d e f 0 �ϳ��� ����
	wchar_t szWchar[7] = L"abcdef";		// ���� �ϳ� �ϳ��� 2byte, '\0' ���� ���ļ� �� 8��
	const wchar_t* pChar = L"abcdef";	// ROM�� �ִ� L"abcdef" �� ĭ�� 2byte �迭�� ù��° �ּ� ��ȯ
										// 2byte ������ �ؼ��ϴ� pChar ������ ����
										// ROM�� �ִ� �Ŵϱ� ������ �ص�, write�� �ϸ� �ȵǹǷ�(const)


	szChar[1] = 'z';

	// write �ȵ�
	// *(pChar + 1) = 'z';
	// pChar[1] = 'z';
	

	short arrshort[10] = { 97, 98, 99, 100, 101, 102 };

	{
		char szTest[10] = "abc�ѱ�";

		wchar_t szTestW[10] = L"abc�ѱ�";
	}

	{
		wchar_t szName[10] = L"Raimond";

		int iLen = wcslen(szName);	
									// ���ڿ��� �����ּҸ� �Ѱܼ� Ȯ������
									// const wchar_t �ּ�
									// L"Raimond"�� ROM�� �����Ƿ� const ���������
									// (�ּ�)����Ű�� ���� write�ϸ� �ȵǴϱ�.
	}

	return 0;
}

// ctrl + shift + enter �Լ� ���� ���� ����