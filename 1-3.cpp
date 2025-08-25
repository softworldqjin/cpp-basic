//주석
//설명 역할, 코드로 인식되지 않는다

#include <iostream>
using namespace std;

int main()
{
	//자료형 (크기 단위, byte)
	//정수형 char(1) short(2) int(4) long(4), long long(8)
	//실수형 float(4) double(8)

	int i = 0;
	
	//1바이트로 양수만 표현
	//256가지 0 - 255
	unsigned char c = 0;

	c = -1; //메모리에는 2진수 11111111이 저장된다는거임.

	//1바이트로 양수, 음수 둘다 표현
	//-128 0 127

	i = 127;


	return 0;
}