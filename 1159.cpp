#include<iostream>
using namespace std;
string name[150];

int main() {
	int alph[26] = { 0, };
	int n;
	int i;
	char index;
	int flag = -1;

	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> name[i];
		//처음 글자
		index = name[i].front() - 'a';
		//해당 알파벳 개수 증가
		alph[index]++;
	}

	//선발 선수 출력
	for (i = 0; i < 26; i++) {
		if (alph[i] >= 5) {
			printf("%c", i + 'a');
			flag = 1;
		}
	}

	//기권
	if (flag == -1) cout << "PREDAJA" << endl;

	return 0;
}
