#include <iostream>
#include <vector>
#include <utility> //pair �Լ��� ����ϱ� ���� ���    
using namespace std;

pair<int, int> dataed[41]; //pair�� int�� �ΰ��� �ε������� ������



int main() {

	std::ios_base::sync_with_stdio(false);//������ ������ �ϱ� ���� �ڵ�
	std::cin.tie(NULL);

	int num;
	int n;

	dataed[0] = { 1, 0 }; //�Ǻ���ġ ���� 0���� ���� �̸� ������
	dataed[1] = { 0, 1 };//�Ǻ���ġ ���� ù���� ���� �̸� ������


	for (int i = 2; i <= 40; ++i) { // 2���� 40���� �Ǻ���ġ ���� �̸� �����
		dataed[i].first = dataed[i - 1].first + dataed[i - 2].first;
		dataed[i].second = dataed[i - 1].second + dataed[i - 2].second;
	}

	cin >> num;//�׽�Ʈ ���̽��� ������ �Է¹���

	for (int i = 0; i < num; i++)
	{
		cin >> n;

		cout << dataed[n].first << " " << dataed[n].second << "\n"; //�̸� ����� ���� �����
	}
}