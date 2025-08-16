#include <iostream>
#include <vector>
#include <utility> //pair 함수를 사용하기 위한 헤더    
using namespace std;

pair<int, int> dataed[41]; //pair로 int형 두개를 인덱스마다 저장함



int main() {

	std::ios_base::sync_with_stdio(false);//실행을 빠르게 하기 위한 코드
	std::cin.tie(NULL);

	int num;
	int n;

	dataed[0] = { 1, 0 }; //피보나치 수열 0번쨰 값을 미리 저장함
	dataed[1] = { 0, 1 };//피보나치 수열 첫번쨰 값을 미리 저장함


	for (int i = 2; i <= 40; ++i) { // 2부터 40까지 피보나치 값을 미리 계산함
		dataed[i].first = dataed[i - 1].first + dataed[i - 2].first;
		dataed[i].second = dataed[i - 1].second + dataed[i - 2].second;
	}

	cin >> num;//테스트 케이스의 개수를 입력받음

	for (int i = 0; i < num; i++)
	{
		cin >> n;

		cout << dataed[n].first << " " << dataed[n].second << "\n"; //미리 계산한 값을 출력함
	}
}