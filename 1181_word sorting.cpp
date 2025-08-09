#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>//���ĺ����� �˻� �ϴ� �Լ��� ����ϱ� ����
using namespace std;

bool all(string dan) //�ܾ ��� ���ĺ����� �˻��ϴ� �Լ�
{
	for (char c : dan)//string dan�� char c�� �ְ� �׸�ŭ �ݺ�
	{
		if (!isalpha(c))//���ĺ����� �˻��ϴ� �Լ�
		{
			return false;
		}

	}
	return true;
}

int main()
{
	string dan;
	vector<string> wan;
	while(cin>>dan) //�Է��� ������ ���� �ݺ��ϰ���
	{
		if (all(dan) == true)  //���ĺ��� ������ string ���Ϳ� �߰���
		{
			wan.push_back(dan);
		}
	}


	sort(wan.begin(), wan.end());//wan ���͸� ���������� ������


	auto last = unique(wan.begin(), wan.end()); //�ߺ��Ǵ� �Լ��� �ڷ� ������ �ߺ��� ������ �����ϴ� �ε����� last�� ����
	wan.erase(last, wan.end());//�ߺ��� ���� ����



	sort(wan.begin(), wan.end(), [](string a,  string b) { //�����Լ��� ���� ������ ������ ����
		if (a.length() != b.length()) { //���� ���̰� �������� ��� ª�� ���� ���� ����
			return a.length() < b.length();
		}
		return a < b; // ���̰� ���� ��� ������ ��
		});


	for (int i = 0; i < wan.size(); i++)
	{
		cout << wan[i] << endl;
	}
}
