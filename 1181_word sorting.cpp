#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>//알파벳인지 검사 하는 함수를 사용하기 위해
using namespace std;

bool all(string dan) //단어가 모두 알파벳인지 검사하는 함수
{
	for (char c : dan)//string dan을 char c에 넣고 그만큼 반복
	{
		if (!isalpha(c))//알파벳인지 검사하는 함수
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
	while(cin>>dan) //입력이 끝날떄 까지 반복하게함
	{
		if (all(dan) == true)  //알파벳이 맞을시 string 벡터에 추가함
		{
			wan.push_back(dan);
		}
	}


	sort(wan.begin(), wan.end());//wan 벡터를 사전순으로 나열함


	auto last = unique(wan.begin(), wan.end()); //중복되는 함수를 뒤로 보내고 중복값 나열을 시작하는 인덱스를 last에 저장
	wan.erase(last, wan.end());//중복된 값을 없앰



	sort(wan.begin(), wan.end(), [](string a,  string b) { //람다함수를 통해 벡터의 값들을 비교함
		if (a.length() != b.length()) { //만약 길이가 같지않을 경우 짧은 길이 먼저 나열
			return a.length() < b.length();
		}
		return a < b; // 길이가 같을 경우 사전순 비교
		});


	for (int i = 0; i < wan.size(); i++)
	{
		cout << wan[i] << endl;
	}
}
