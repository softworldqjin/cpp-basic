// vector는 vector라는 헤더에, std네임스페이스 안에, class 템플릿 되어있는거다
// template<typename T>
// class vector
// T* 

#include <vector>
#include <list>
#include <iostream>

using std::cout;
using std::endl;

using std::list;
using std::vector;

int main()
{
	vector<int> vecInt; // vectro<int> 까지가 class생성, 생성됐으니까 vector 클래스로 vecInt 인스턴스 생성
						// vecInt 인스턴스 안에는 특정한 몇몇이 int자료형
	vecInt.push_back(10);
	vecInt.push_back(20);

	vecInt[0]; // 같은거 vecInt.at(0); 0번째값을 &레퍼런스 값으로 반환
	
	// 연속된 메모리의 포인터 반환
	int* p = vecInt.data();
	cout << p[1] << endl;

	// 현재 벡터에 들어있는 원소 개수 반환
	int k = vecInt.size();
	
	// 재할당없이 넣을 수 있는 최대 원소 개수 반환
	int j = vecInt.capacity();

	for (size_t i = 0; i < vecInt.size(); ++i)	// 메모리 한칸에 1byte, 64비트 cpu는 8byte씩 접근가능
	{											// 한번에 접근해서 더 빠르다.
		cout << vecInt[i] << endl;
	}

	list<int> listInt;
	listInt.push_back(10);
	listInt.push_front(100);

	// iterator(inner class),, list 클래스안에 iterator클래스가 구현되어있다. 그걸로 iter객체만듦.
	list<int>::iterator iter = listInt.begin(); // listInt 객체 반환...(안에 여러 멤버변수, 함수 있겠지)
	int iData = *iter; // operator * () 연산자 오버로딩되있네

	return 0;

}
