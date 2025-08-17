#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m;//듣도 못한사람과 보도 못한 사람의 수
	int count = 0;//듣보잡을 세기위한 변수

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

	sort(hear.begin(), hear.end());//바이너리 서치를 사용하기 위해 정렬
	sort(see.begin(), see.end());

	for (int i = 0; i < m; i++) {
		if (binary_search(hear.begin(), hear.end(), see[i])) {//듣도 못한 사람의 백터에서 보도 못한 사람의 이름이 있는지 검색
			nobody.push_back(see[i]);//있다면 듣보잡 리스트에 추가
			count++;//듣보잡의 수를 증가시킴
		}
	}

	cout << count << endl;

	for (int i = 0; i < count; i++) {//듣보잡 수만큼 반복하여 듣보잡 출력
		cout << nobody[i] << endl;
	}
}