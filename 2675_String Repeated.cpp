#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, num;//�ݺ� Ƚ��, �׽�Ʈ ���̽� ����
    string c;// ���ڿ�
    cin >> num;

    for (int j = 0;j < num;j++) //�׽�Ʈ ���̽� �� ��ŭ �ݺ�
    {
        cin >> n >> c;//�ݺ� Ƚ���� ���ڿ��� �Է¹���

        for (int i = 0;i < c.size();i++)//���ڿ��� ũ�⸸ŭ �ݺ�
        {
            for (int j = 0;j < n;j++) {//�ݺ� Ƚ�� ��ŭ �ݺ�
                cout << c[i];//�ݺ� Ƚ����ŭ �� ���ڸ� �ݺ����
            }

        }
        cout << endl;
    }
}