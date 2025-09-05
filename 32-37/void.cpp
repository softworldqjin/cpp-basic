// void
// 1. 원본의 자료형을 해석할 단위를 정하지 않음
// 2. 어떠한 타입의 변수의 주소든 다 저장 가능
// 3. 역참조 불가능 (*ptr)
// 4. 주소 연산 불가능 (ptr + 1)

int main()
{
	void* pVoid = nullptr; // 포인터가 가리키는 변수를 해석하는 단위가 정해지지 않음


	int a = 0;
	float f = 0.f;
	double d = 0.;
	long long ll = 0;

	pVoid = &a; // 포인터가 가리키는 변수를 해석하는 단위가 정해지지 않았으니까
				// 어떤 자료형이든 모두 받을 수 있다
				// 포인터변수는 float이면 float포인터가, int이면 int포인터가 받는게 
				// 해석하는데 잘못되지 않음
	pVoid = &f;
	pVoid = &d;
	pVoid = &ll;

	*pVoid;		// 해석하는 단위가 정해지지 않으니까 가리키는 변수에 접근 불가능
	pVoid + 1;	// 주소 연산도 불가능

	return 0;
}