#include <iostream>

int main(void) {
	//��� std::cout << 
	int num = 20;
	std::cout << "Hello world!" << std::endl;
	std::cout << "Hello" << "world!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	std::cout << 1 << 2 << 3 << 4 << 5;
	std::cout << 6 << 7 << 8;

	//�Է� std::cin >>
	double val1;
	std::cout << "ù ��° �����Է�: ";
	std::cin >> val1;

	double val2;
	std::cout << "�� ��° �����Է�: ";
	std::cin >> val2;

	double result = val1 + val2;
	std::cout << "�������: " << result << std::endl;
	int val1 , val2;
	int result = 0;
	std::cout << "�ΰ��� �����Է�:";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
		
	}
	else {
		for (int i = val2 + 1; i < val1; i++) 
			result += i;
	}
	std::cout << "�� �� ������ ���� ��: " << result << std::endl;

	//�迭 ����� ���ڿ� �����
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�.\n";
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�. " << std::endl;

	

	return 0;
}