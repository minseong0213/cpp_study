#include <iostream>

int main(void) {

	int val1[100];
	int result = 0;

	std::cout << "1��° ���� �Է�: \n";
	std::cin >> val1[0];
	std::cout << "2��° ���� �Է�: \n";
	std::cin >> val1[1];
	std::cout << "3��° ���� �Է�: \n";
	std::cin >> val1[2];
	std::cout << "4��° ���� �Է�: \n";
	std::cin >> val1[3];
	std::cout << "5��° ���� �Է�: \n";
	std::cin >> val1[4];

	for (int i = 0; i < 5; i++) {
		result += val1[i];
	}
	std::cout << "�հ�: " << result << std::endl;
	

}