// ����ü�� ������

typedef struct _tagMySt
{
	int a;		// ���
	float b;
}MYST;

int main()
{
	MYST s = {};
	
	MYST* pST = &s; // ù �ּҺ��� ����ü ���� �ؼ�, int 4byte float 4byte ��, 8byte ���� �ؼ�(����)
	*pST;
	(*pST).a = 100;		// ����ü�ϱ� �ѹ� �� ����, ù ��° �ּҺ��� 4byte ���� 100 ����
	(*pST).b = 1.0f;	// 4byte ���� �ּҺ��� 8byte���� 1.0f ����

	pST->a = 100;
	pST->b = 1.0f; 

	return 0;
}