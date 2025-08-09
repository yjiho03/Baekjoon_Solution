#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

class person { //벡터에 int형과 string형을 같은 인덱스에 저장하기 위해 클래스 생성
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
	int num,age; //반복할 횟수를 정할 num과 클래스에 값을 넣기 위한 변수 생성
	string name;

	cin >> num;//반복횟수 입력받음

	vector<person> human(num); //person클래스 매개변수를 가진 벡터 생성
	
	
	for (int i = 0; i < num; i++)//나이와 이름을 입력받고 저장
	{
		cin >> age;
		cin >> name;
		human[i].set(age, name);
	}

	stable_sort(human.begin(), human.end(), [](person a, person b) { //stable_sort는 값이 같을 경우 정렬 전의 순서를 유지해서 먼저 들어온 값이 앞에 오게함
		return a.getage() < b.getage();
		});

	for (int i = 0; i < num; i++)
	{
		cout << human[i].getage() << ' ' << human[i].getname() << endl;
	}

}