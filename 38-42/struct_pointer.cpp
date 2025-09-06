// 구조체와 포인터

typedef struct _tagMySt
{
	int a;		// 멤버
	float b;
}MYST;

int main()
{
	MYST s = {};
	
	MYST* pST = &s; // 첫 주소부터 구조체 단위 해석, int 4byte float 4byte 즉, 8byte 단위 해석(접근)
	*pST;
	(*pST).a = 100;		// 구조체니까 한번 더 접근, 첫 번째 주소부터 4byte 까지 100 저장
	(*pST).b = 1.0f;	// 4byte 다음 주소부터 8byte까지 1.0f 저장

	pST->a = 100;
	pST->b = 1.0f; 

	return 0;
}