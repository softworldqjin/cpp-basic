template<typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main()
{
	// 함수 템플릿
	// int i = Add(10,20); 가능하지만 함수 템플릿 쓰는걸 알수있도록 <int> 를 명시하자
	int iData = Add<int>(10, 20);

	return 0;
}