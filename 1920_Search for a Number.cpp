#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); //����� �ӵ��� �������� �ϴ� �ڵ�
	cin.tie(NULL);

	int n,m;//n,m���� �Է¹��� ����
	int num;//nnum���Ϳ� ���� ��

	cin >> n;//n���� �Է¹���
	vector<int> nnum(n);//n���� ũ���� ��Ʈ�� ���ͻ���

	for (int i = 0;i < n;i++) //���� �Է¹ް� nnum���Ϳ� �ִ� �ݺ���
	{
		cin >> nnum[i];
	}



	cin >> m;//m���� �Է¹���


	//vector<int> mnum(m);//m���� ũ���� ��Ʈ�� ���ͻ���  (����� �ӵ� ����ȭ�� ���� ����)

	//for (int i = 0;i < m;i++) //���� �Է¹ް� mnum���Ϳ� �ִ� �ݺ���
	//{
	//	cin >> mnum[i];
	//}

	sort(nnum.begin(), nnum.end()); //ũ������� ���� ����

	for (int i = 0;i < m;i++) //m�� ��ŭ�ݺ���
	{
		cin >> num;
		if (binary_search(nnum.begin(), nnum.end(), num))//binary_search�� ���ҷ� �˻��Ͽ� �ӵ� ����ȭ��Ŵ
		{
			cout << '1' << '\n';//\n ������� ����� �ӵ� ����
		}
		else
			cout << '0' << '\n';
	}
}
