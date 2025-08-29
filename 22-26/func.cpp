#include <stdio.h>
#include "func.h"
#include "common.h" // 정적변수 선언한 헤더파일을 전처리(복붙)한다. == 선언 및 정의를 여기서 또 한 것
					// 선언이 된 파일에서만 인식 및 접근가능


int Add(int a, int b)
{
	printf("func.cpp에서 선언 및 정의 된 g_iStatic: %d\n", g_iStatic); 
											//func.cpp에서 g_iStatic은 0임 
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}