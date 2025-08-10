#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;//카드 개수
	int top;
	cin >> n;
	queue<int> s;//int형 큐생성

	for (int i = 0;i < n;i++) { //1부터 카드개수만큼 큐의 뒤에 넣음
		s.push(i+1);
	}
	
	while (true)  //1개만 남을떄까지 반복
	{
		if (s.size() > 1) //1개보다 많을시에는 if문 실행
		{
			s.pop(); //맨위에 값을 삭제
			top = s.front();//맨위의 값을 삭제후 맨위를 저장
			s.pop();//맨 위의 값을 삭제
			s.push(top);//저장해둔 맨위 값을 맨뒤에 생성
		}
		else//1개 보다 적을시 반복문 탈출
			break;
	}

	cout << s.front();//마지막 남은 값을 보여줌
}