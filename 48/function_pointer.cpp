void doNothing(char c)
{

}

int doSomething(double d1, double d2)
{
	return 1;
}

void dummy(char c)
{

}

int main()
{
	void (*ptr) (char);	// ��ȯ���� void, �޴� ���ڰ��� char��
						// �� �޴� �Լ��� �ּҸ� ������ ���� ptr�� ���� 
	ptr = doNothing;	// doNothing �Լ��� �ּҴ� doNothing

	doNothing('A');		// �ּ�(����) -> �Լ� ȣ��
	ptr('A');			// ptr�� doNothing�� �ּҸ� ���� �����Ƿ� 
						// �ּ�(����) ���� ��

	ptr = dummy;		// dummy�Լ��� ��ȯ���� void�̰�, �޴� ���ڰ��� char���̴ϱ�
						// ��ȯ���� void, ���ڰ� char���� �Լ��� �ּҸ� �����ϴ�
						// ������ ���� ptr�� dummy�Լ��� �ּҸ� ���尡��
	ptr('A');			// �׸��� dummy�Լ��� �ּ�(����)�ؼ� �Լ� ȣ�� ����

	int (*pptr) (double, double);
	pptr = doSomething;
	doSomething(3.1, 3.1);
	pptr(3.1, 3.1);
}