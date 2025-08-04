#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, num;//반복 횟수, 테스트 케이스 개수
    string c;// 문자열
    cin >> num;

    for (int j = 0;j < num;j++) //테스트 케이스 수 만큼 반복
    {
        cin >> n >> c;//반복 횟수와 문자열을 입력받음

        for (int i = 0;i < c.size();i++)//문자열의 크기만큼 반복
        {
            for (int j = 0;j < n;j++) {//반복 횟수 만큼 반복
                cout << c[i];//반복 횟수만큼 각 글자를 반복출력
            }

        }
        cout << endl;
    }
}