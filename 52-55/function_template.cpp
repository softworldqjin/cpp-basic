template<typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main()
{
	// �Լ� ���ø�
	// int i = Add(10,20); ���������� �Լ� ���ø� ���°� �˼��ֵ��� <int> �� �������
	int iData = Add<int>(10, 20);

	return 0;
}