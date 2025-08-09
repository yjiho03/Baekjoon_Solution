#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

class person { //���Ϳ� int���� string���� ���� �ε����� �����ϱ� ���� Ŭ���� ����
	int age; 
	string name;
	public:
		void set(int age, string name) 
	{
		this->age = age;
		this->name = name;
	}
		int getage() {
			return age;
		}
		string getname(){
			return name;
		}
};


int main()
{
	int num,age; //�ݺ��� Ƚ���� ���� num�� Ŭ������ ���� �ֱ� ���� ���� ����
	string name;

	cin >> num;//�ݺ�Ƚ�� �Է¹���

	vector<person> human(num); //personŬ���� �Ű������� ���� ���� ����
	
	
	for (int i = 0; i < num; i++)//���̿� �̸��� �Է¹ް� ����
	{
		cin >> age;
		cin >> name;
		human[i].set(age, name);
	}

	stable_sort(human.begin(), human.end(), [](person a, person b) { //stable_sort�� ���� ���� ��� ���� ���� ������ �����ؼ� ���� ���� ���� �տ� ������
		return a.getage() < b.getage();
		});

	for (int i = 0; i < num; i++)
	{
		cout << human[i].getage() << ' ' << human[i].getname() << endl;
	}

}