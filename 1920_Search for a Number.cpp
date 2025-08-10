#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false); //입출력 속도가 빨라지게 하는 코드
	cin.tie(NULL);

	int n,m;//n,m개를 입력받을 변수
	int num;//nnum벡터와 비교할 수

	cin >> n;//n개를 입력받음
	vector<int> nnum(n);//n개의 크기의 인트형 벡터생성

	for (int i = 0;i < n;i++) //값을 입력받고 nnum벡터에 넣는 반복문
	{
		cin >> nnum[i];
	}



	cin >> m;//m개를 입력받음


	//vector<int> mnum(m);//m개의 크기의 인트형 벡터생성  (입출력 속도 최적화를 위해 제외)

	//for (int i = 0;i < m;i++) //값을 입력받고 mnum벡터에 넣는 반복문
	//{
	//	cin >> mnum[i];
	//}

	sort(nnum.begin(), nnum.end()); //크기순으로 벡터 정렬

	for (int i = 0;i < m;i++) //m개 만큼반복함
	{
		cin >> num;
		if (binary_search(nnum.begin(), nnum.end(), num))//binary_search로 분할로 검색하여 속도 최적화시킴
		{
			cout << '1' << '\n';//\n 사용으로 입출력 속도 높임
		}
		else
			cout << '0' << '\n';
	}
}
