#include <stdio.h>
void Test(int* a) //int 자료형으로 해석
{
	*a = 50;
}

int main()
{
	// 문제 1
	short sArr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //sizeof(short) == 2byte
	int* pI = (int*)sArr; // (int*) 강제캐스팅을 한다는 것은, 단지 이제 pI를 통해 접근할 때 
						  // **4바이트 단위(int 단위)**로 읽거나 쓸 수 있게 된다는 의미
						  // 데이터는 항상 같음

	int iData = *((short*)(pI + 2));
						  // pI + 2 는 첫 주소에서 4byte씩 2번 움직이고, 
						  // short 배열은 한 칸당 2byte였으니까 1번 움직일 때 2칸 움직이고,
						  // 총 4칸 움직이니 5를 가리키는 거임
						  // short* 로 강제캐스팅해서 2byte 단위로 읽거나 쓸 수 있게 됨
						  // iData는 2byte 데이터, 즉 0000000000000101를 4btye 메모리에 
						  // 0x05 0x00 0x00 0x00 를 저장하는 것이 됨 -> 출력하면 5가 됨
	printf("1번 문제 정답: %d\n", iData);
						  // 5

	// 문제 2
	char cArr[2] = { 1,1 }; // char는 1byte 단위
	short* pS = (short*)cArr; // short는 2byte 단위로 읽거나 쓸 수 있게 됨
							  // 00000001 00000001 를 한번에 읽어서
							  // 0000000100000001 -> 2^8 + 2^0 = 257
							  // 4byte 저장공간(32bit) 안에 16비트 저장(리틀엔디안방식 역으로넣음)
	iData = *pS; 

	printf("2번 문제 정답: %d\n", iData); //257

	int a = 100;
	Test(&a); 

	printf("출력: %d\n", a);
	scanf_s("%d", &a); // a주소에 입력된 값을 저장

	return 0;


}