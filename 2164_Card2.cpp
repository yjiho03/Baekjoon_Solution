#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;//ī�� ����
	int top;
	cin >> n;
	queue<int> s;//int�� ť����

	for (int i = 0;i < n;i++) { //1���� ī�尳����ŭ ť�� �ڿ� ����
		s.push(i+1);
	}
	
	while (true)  //1���� ���������� �ݺ�
	{
		if (s.size() > 1) //1������ �����ÿ��� if�� ����
		{
			s.pop(); //������ ���� ����
			top = s.front();//������ ���� ������ ������ ����
			s.pop();//�� ���� ���� ����
			s.push(top);//�����ص� ���� ���� �ǵڿ� ����
		}
		else//1�� ���� ������ �ݺ��� Ż��
			break;
	}

	cout << s.front();//������ ���� ���� ������
}