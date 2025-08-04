#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	vector<int> vec_num(3);//3개의 값을 넣을 벡터
	while (true) //반복문
	{
		cin >> vec_num[0] >> vec_num[1] >> vec_num[2]; //벡터에 각 값을 넣음
		if (vec_num[0]==0 && vec_num[1]==0 && vec_num[2] == 0)//모든 값이 0일시 실행 종료
		{
			return 0;
		}
		sort(vec_num.begin(), vec_num.end());//벡터를 크기 순으로 나열함
		
		int a = vec_num[0], b = vec_num[1], c = vec_num[2]; //쉽게 보기위해 각 값을 a,b,c에 저장
		if (a*a+b*b==c*c)
		{
			cout << "right"<<endl;
		}
		else {
			cout << "wrong"<<endl;
		}
	}
}