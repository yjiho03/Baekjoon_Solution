#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	vector<int> vec_num(3);//3���� ���� ���� ����
	while (true) //�ݺ���
	{
		cin >> vec_num[0] >> vec_num[1] >> vec_num[2]; //���Ϳ� �� ���� ����
		if (vec_num[0]==0 && vec_num[1]==0 && vec_num[2] == 0)//��� ���� 0�Ͻ� ���� ����
		{
			return 0;
		}
		sort(vec_num.begin(), vec_num.end());//���͸� ũ�� ������ ������
		
		int a = vec_num[0], b = vec_num[1], c = vec_num[2]; //���� �������� �� ���� a,b,c�� ����
		if (a*a+b*b==c*c)
		{
			cout << "right"<<endl;
		}
		else {
			cout << "wrong"<<endl;
		}
	}
}