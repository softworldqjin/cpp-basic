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
	void (*ptr) (char);	// 반환형태 void, 받는 인자값은 char형
						// 을 받는 함수의 주소를 포인터 변수 ptr이 받음 
	ptr = doNothing;	// doNothing 함수의 주소는 doNothing

	doNothing('A');		// 주소(인자) -> 함수 호출
	ptr('A');			// ptr도 doNothing의 주소를 갖고 있으므로 
						// 주소(인자) 같은 논리

	ptr = dummy;		// dummy함수도 반환형태 void이고, 받는 인자값도 char형이니까
						// 반환형태 void, 인자값 char형인 함수의 주소를 저장하는
						// 포인터 변수 ptr에 dummy함수의 주소를 저장가능
	ptr('A');			// 그리고 dummy함수의 주소(인자)해서 함수 호출 가능

	int (*pptr) (double, double);
	pptr = doSomething;
	doSomething(3.1, 3.1);
	pptr(3.1, 3.1);
}