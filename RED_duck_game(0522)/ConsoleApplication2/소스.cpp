#include <iostream>
#include <time.h>
using namespace std;

int cards[4][13];
int num[3];
int money = 1000;
int ran;
int betting;

void initCard(){
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			cards[i][j] = 0;
		}
	}
}


void getShap(){
	ran = rand() % 4 + 1;

	switch (ran){
	case 1:
		cout << "��";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	case 4:
		 cout << "��";
		break;
	}
}

void result(){
	while (betting > money) cout << "�����ұݾ� �Է�: "; cin >> betting;
	num[2] <= (num[0] > num[1] ? num[0] : num[1]) && num[2] >= (num[0] < num[1] ? num[0] : num[1]) ? cout << (money += + betting) : cout << (money -= betting);
	if (money < 0) { cout << "�Ļ�"; exit(0); }
}

int getNum(int j){
	int tmp = rand() % 13 + 1;
	while (cards[j][tmp]) tmp = rand() % 13 + 1;
	cards[j][tmp] = 1; num[j] = tmp;
	return num[j];
}

int main(){
	initCard();
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 17; i++){
		cout << "==================================" << endl;
		for (int j = 0; j < 3; j++){
			getShap();
			cout << getNum(j) << "\t";
		}
		cout << "�����ұݾ� �Է�: "; cin >> betting;
		result();
		cout << endl;

	}

	return 0;
}