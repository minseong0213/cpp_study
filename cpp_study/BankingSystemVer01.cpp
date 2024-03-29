//Banking System Ver 0.1
#include <cstring>
#include <iostream>
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);



const int NAME_LEN = 20;

enum {MAKE=1, DEPOSIT,WITHDRAW , INQUIRE, EXIT};

typedef struct {
	int accID;
	int balance;
	char cusName[NAME_LEN];

}Account;

Account accArr[100];
int accNum = 0;

int main(void)
{
	int choice;

	while (1) {
		ShowMenu();
		cout << "선택:";
		cin >> choice;
		cout << endl;
			switch (choice)
			{
			case MAKE:
				MakeAccount();
				break;
			case DEPOSIT:
				DepositMoney();
				break;
			case WITHDRAW:
				WithdrawMoney();
				break;
			case INQUIRE:
				ShowAllAccInfo();
				break;
			case EXIT:
				return 0;
			default:
				cout << "Illegal selection.. " << endl;
			}
	}
	return 0;
} 
void ShowMenu(void) {
	cout << "===========MENU==========" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌 정보 전체출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount(void) {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이 름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	strcpy(accArr[accNum].cusName, name);
	accArr[accNum].balance = balance;
	accNum++;

}

void DepositMoney(void) {
	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;

}

void WithdrawMoney(void) {
	int money;
	int id;
	cout << "[출 금]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			if (accArr[i].balance < money) {
				cout << "잔액 부족" << endl;
				return;
			}
			accArr[i].balance -= money;
			cout << "출금 완료" << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;

}

void ShowAllAccInfo(void) {
	for (int i = 0; i < accNum; i++) {
		cout << "계좌 ID: " << accArr[i].accID << endl;
		cout << "이 름: " << accArr[i].cusName << endl;
		cout << "잔 액: " << accArr[i].balance << endl;
	}
}