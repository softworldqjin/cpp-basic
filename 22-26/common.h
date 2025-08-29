#pragma once

// 정적변수
static int g_iStatic = 0;
extern int g_iExtern; // extern 외부변수를 쓸려면, 선언만 해야됨
					  // #define으로 복붙하면 컴파일 타임에 이거 선언되있으니까 
					  // 이거 수정이든 뭐든 가능 OK, 링크 타임으로 이동 
					  // 
					  // 링크타임때 검사할 때, 어딘가에 정의되어있으면 됨
					  // 정의 된거 가지고 와서 수정 접근하는거임.