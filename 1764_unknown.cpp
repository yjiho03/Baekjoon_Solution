#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m;//�赵 ���ѻ���� ���� ���� ����� ��
	int count = 0;//�躸���� �������� ����

	cin >> n >> m;
	vector<string> hear(n);
	vector<string> see(m);
	vector<string> nobody;
	for (int i = 0; i < n; i++) {
		cin >> hear[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> see[i];
	}

	sort(hear.begin(), hear.end());//���̳ʸ� ��ġ�� ����ϱ� ���� ����
	sort(see.begin(), see.end());

	for (int i = 0; i < m; i++) {
		if (binary_search(hear.begin(), hear.end(), see[i])) {//�赵 ���� ����� ���Ϳ��� ���� ���� ����� �̸��� �ִ��� �˻�
			nobody.push_back(see[i]);//�ִٸ� �躸�� ����Ʈ�� �߰�
			count++;//�躸���� ���� ������Ŵ
		}
	}

	cout << count << endl;

	for (int i = 0; i < count; i++) {//�躸�� ����ŭ �ݺ��Ͽ� �躸�� ���
		cout << nobody[i] << endl;
	}
}