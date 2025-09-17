// vector�� vector��� �����, std���ӽ����̽� �ȿ�, class ���ø� ���ִ°Ŵ�
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
	vector<int> vecInt; // vectro<int> ������ class����, ���������ϱ� vector Ŭ������ vecInt �ν��Ͻ� ����
						// vecInt �ν��Ͻ� �ȿ��� Ư���� ����� int�ڷ���
	vecInt.push_back(10);
	vecInt.push_back(20);

	vecInt[0]; // ������ vecInt.at(0); 0��°���� &���۷��� ������ ��ȯ
	
	// ���ӵ� �޸��� ������ ��ȯ
	int* p = vecInt.data();
	cout << p[1] << endl;

	// ���� ���Ϳ� ����ִ� ���� ���� ��ȯ
	int k = vecInt.size();
	
	// ���Ҵ���� ���� �� �ִ� �ִ� ���� ���� ��ȯ
	int j = vecInt.capacity();

	for (size_t i = 0; i < vecInt.size(); ++i)	// �޸� ��ĭ�� 1byte, 64��Ʈ cpu�� 8byte�� ���ٰ���
	{											// �ѹ��� �����ؼ� �� ������.
		cout << vecInt[i] << endl;
	}

	list<int> listInt;
	listInt.push_back(10);
	listInt.push_front(100);

	// iterator(inner class),, list Ŭ�����ȿ� iteratorŬ������ �����Ǿ��ִ�. �װɷ� iter��ü����.
	list<int>::iterator iter = listInt.begin(); // listInt ��ü ��ȯ...(�ȿ� ���� �������, �Լ� �ְ���)
	int iData = *iter; // operator * () ������ �����ε����ֳ�

	return 0;
}